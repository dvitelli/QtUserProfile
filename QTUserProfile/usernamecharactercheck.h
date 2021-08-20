#ifndef USERNAMECHARACTERCHECK_H
#define USERNAMECHARACTERCHECK_H
#include <regex>
#include <QString>

#include <QtDebug>


class UserNameCharacterCheck
{
public:
    UserNameCharacterCheck();
    bool userNameSpaceCheck(QString userName){

        bool passesCheck = false;

        std::string userNameCheck = userName.toStdString();

        std::regex alphaNumeric("^[A-Za-z0-9]*$");

        if(std::regex_search(userNameCheck, alphaNumeric)){
            //qDebug() << "String 1 matches";
            passesCheck = true;
        }else{
            //qDebug() << "String 1 doesnt match";
        }

        return passesCheck;


    }
};

#endif // USERNAMECHARACTERCHECK_H
