#ifndef STRINGSPLIT_H
#define STRINGSPLIT_H

#include <string>
#include <iostream>
#include <loginobject.h>
#include <vector>
#include <ostream>


class StringSplit
{
public:

    StringSplit();

    LoginObject ObjectSplitFunction(std::string userData){ //splits input string into the objects variables and spits it back


        LoginObject splitObject;
        std::vector<std::string> userDataVector;
        std::string del = "|";

        int start = 0;
        int end = userData.find("|"); //splits at the | character
        while (end != - 1){
        //std::cout << userData.substr(start, end - start) << std::endl;
        userDataVector.push_back(userData.substr(start, end - start));
        start = end + del.size();
        end = userData.find(del, start);
        }
        userDataVector.push_back(userData.substr(start, end - start));
        //std::cout << userData.substr(start, end - start);



        splitObject.setUserName(QString::fromLocal8Bit(userDataVector.at(0))); //inserts now split string in different vector slots into the object
        splitObject.setCountry(QString::fromLocal8Bit(userDataVector.at(1)));
        splitObject.setBirthdayInput(QString::fromLocal8Bit(userDataVector.at(2)));
        std::cout << splitObject.getUserName().toStdString() << splitObject.getCountry().toStdString() << splitObject.getBirthday().toStdString();

        return splitObject;
    }

};

#endif // STRINGSPLIT_H
