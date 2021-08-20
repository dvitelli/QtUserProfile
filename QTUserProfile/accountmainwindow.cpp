#include "accountmainwindow.h"
#include "ui_accountmainwindow.h"
#include "mainwindow.h"
#include <QDialog>
#include <QFileDialog>
#include <filemanagement.h>
#include <QMessageBox>

accountMainWindow::accountMainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountMainWindow)
{

    ui->setupUi(this);
    std::string fileName = "UserProfile.csv";
    FileManagement file;
    LoginObject currentProfile;
    currentProfile = file.readTextFile(fileName); //reads textfile and sets object from the most recent profile

    ui->lineEdit_ProfileUserName->setText(currentProfile.getUserName());
    ui->lineEdit_ProfileCountry->setText(currentProfile.getCountry());
    ui->lineEdit_ProfileBirthday->setText(currentProfile.getBirthday());


}


accountMainWindow::~accountMainWindow()
{
    delete ui;
}


void accountMainWindow::on_pushButton_close2_clicked()
{
    QApplication::quit();
}


void accountMainWindow::on_pushButton_Avatar_clicked() //when avatar button is clicked it allows the user to choose an image from the UI
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose an Image"), "", tr("All Images (*.png *.jpg *.jpeg *.gif) ;; PNG (*.png);; JPG (*.jpg);; JPEG (*.jpeg);; GIF (*.gif);; BMP (*.bmp)")); //*.png, *.jpg, *.jpeg, *.gif, *.BMP
    if(QString::compare(filename, QString()) != 0)
        {
            QImage image;
            bool imageAcceptable = image.load(filename);//checks to see if image works

            if(imageAcceptable){//if image works set the label to the image
                ui -> label_Avatar->setPixmap(QPixmap::fromImage(image));

            }
            else{
                QMessageBox::information(this, "Invald file","Please choose another image."); //error handling for user selecting a non image

            }
    }
}


void accountMainWindow::on_pushButton_SwitchAccounts_clicked()
{

    this->close();


}

