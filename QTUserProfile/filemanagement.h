#ifndef FILEMANAGEMENT_H
#define FILEMANAGEMENT_H

#include <QFileDialog>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stringsplit.h>


#include "loginobject.h"


class FileManagement //reads text file and sets the current profile to the most recently added profile
{
public:
    FileManagement();

    LoginObject readTextFile(std::string fileName){

        std::vector<std::string> userDataArray; //vector neccesary to hold user data from file
        LoginObject currentProfile; //object to hold current profile


        std::ifstream  data(fileName);

           std::string line;
           while(std::getline(data,line)) //file read - while there are still items in file continue to write it to the vector
           {
               std::stringstream  lineStream(line);
               std::string        cell;
               while(std::getline(lineStream,cell,','))
               {
                   userDataArray.push_back(cell); //add file info to cell
               }
           }

           /*for (std::vector<std::string>::const_iterator i = userDataArray.begin(); i != userDataArray.end(); ++i)
               std::cout << *i << ' ';*/
           std::string mostRecentUser = userDataArray.back(); //selects the most recent user profile input as a string
           currentProfile = ObjectSplitFunction(mostRecentUser); //splits the user profile string into the profile object

           //currentProfile.printObject();

           return currentProfile;

        }

    LoginObject ObjectSplitFunction(std::string userData){ //splits object from vector into new vector and then adds info to the main object. tried to modularize and struggled, ended up putting here for ease of use.


        LoginObject splitObject;
        std::vector<std::string> userDataVector;
        std::string del = "|";

        int start = 0;
        int end = userData.find("|");
        while (end != - 1){
        //std::cout << userData.substr(start, end - start) << std::endl;
        userDataVector.push_back(userData.substr(start, end - start));
        start = end + del.size();
        end = userData.find(del, start);
        }
        userDataVector.push_back(userData.substr(start, end - start));
        //std::cout << userData.substr(start, end - start);



        splitObject.setUserName(QString::fromLocal8Bit(userDataVector.at(0)));
        splitObject.setCountry(QString::fromLocal8Bit(userDataVector.at(1)));
        splitObject.setBirthdayInput(QString::fromLocal8Bit(userDataVector.at(2)));
        //std::cout << splitObject.getUserName().toStdString() << splitObject.getCountry().toStdString() << splitObject.getBirthday().toStdString();

        return splitObject;
    }



    void writeTextFile(LoginObject userProfile, std::string fileName){ //writes the text file

      std::fstream fileStream;
      std::ofstream userFile;
      fileStream.open(fileName);


        if(fileStream.fail() ){ //check to see if file exists, if it doesnt make it else append to file


            userFile.open("UserProfile.csv");
            //userFile << "Login, Country, Birthday,\n";
            userFile << userProfile.getUserName().toStdString()+"|";
            userFile << userProfile.getCountry().toStdString()+"|";
            userFile << userProfile.getBirthday().toStdString()+ ",\n";
            userFile.close();

    } else {

            userFile.open("UserProfile.csv", std::ios_base::app);
            userFile << userProfile.getUserName().toStdString()+"|";
            userFile << userProfile.getCountry().toStdString()+"|";
            userFile << userProfile.getBirthday().toStdString()+ ",\n";
            userFile.close();

      }

    }


};

#endif // FILEMANAGEMENT_H
