#ifndef LOGINOBJECT_H
#define LOGINOBJECT_H

#include <QString>
#include <iostream>


class LoginObject
{

    QString username;
    QString country;
    QString birthday;

public:
    LoginObject();
    LoginObject(QString usernameInput, QString countryInput, QString birthdayInput){ //login object constructor, takes in three Qstrings from the QT interface when login button is pressed

        this->username = usernameInput;
        this->country = countryInput;
        this->birthday = birthdayInput;

    };

    QString getUserName(){

        return username;

    }
    QString getCountry(){

        return country;

    }
    QString getBirthday(){

        return birthday;

    }

    void setUserName(QString usernameInput){

        this->username = usernameInput;
    }
    void setCountry(QString countryInput){

        this->country   = countryInput;
    }
    void setBirthdayInput(QString birthdayInput){

        this->birthday = birthdayInput;
    }

    void printObject(){ //print function to test object information
        std::cout << "Username: "+this->username.toStdString() << "Country: "+this->country.toStdString() << "Birthday: "+this->birthday.toStdString();
    }
};

#endif // LOGINOBJECT_H
