#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "namematrix.h"
#include <QMessageBox>
#include "accountmainwindow.h"
#include "comboboxlist.h"
#include <QFileDialog>
#include <filemanagement.h>
#include "loginobject.h"
#include "usernamecharactercheck.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

    ui->setupUi(this);
    QStringList comboBoxListSetup = ComboBoxList().ComboBoxListIntitalization(); //calls function to initialize combo box country dropdown list
    ui->comboBox_country->addItems(comboBoxListSetup);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_generateRandomUserName_clicked()
{

    //generates a random name and inserts it into the line edit field for username

    NameMatrix randomName;
    ui -> lineEdit_UserName->setText(randomName.RandomNameFunction());

}



void MainWindow::on_pushButton_close_clicked()
{
    this->close(); //closes app
}


void MainWindow::on_pushButton_login_clicked() //sets up the userprofile object - performs checks to make sure info is valid
{

    FileManagement file;
    std::string fileName = "UserProfile.csv";
    QString  username = ui -> lineEdit_UserName->text();
    QString country = ui ->comboBox_country->currentText();
    QDate birthday = ui -> dateEdit_birthday->date();
    QString dateString = birthday.toString();

    LoginObject userProfile(username, country, dateString);

    UserNameCharacterCheck userNameCheck;
    bool regexCheck = userNameCheck.userNameSpaceCheck(username); //checks username to make sure no spaces or non alphanumeric characters


     if(username.isEmpty() == true){ //checks to see if username has any text if not throw an error box
         QMessageBox::information(this, "Incorrect Login", "Please enter a username.");
     //if(username.is){
         //QMessageBox::information(this, "Incorrect Login", "User Name can not contain spaces.");
     //
     } if(regexCheck == false){ //if regex fails passes error

         QMessageBox::information(this, "Incorrect Login", "Username can only contain alphanumeric characters.");

     } else{

            file.writeTextFile(userProfile, fileName); //writes to file
            file.readTextFile(fileName); //reads file sets object


            this->hide(); //hides this window to open up the profile page
            accountMainWindow accountWindow;
            accountWindow.setModal(true);
            accountWindow.exec();
            this->show();



         }
}

