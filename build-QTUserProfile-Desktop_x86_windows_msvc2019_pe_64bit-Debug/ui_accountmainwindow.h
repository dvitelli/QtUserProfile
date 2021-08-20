/********************************************************************************
** Form generated from reading UI file 'accountmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTMAINWINDOW_H
#define UI_ACCOUNTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountMainWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_ProfileUserName;
    QLabel *label_ProfileCountry;
    QLabel *label_ProfileBirthday;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_close2;
    QPushButton *pushButton_Avatar;
    QPushButton *pushButton_SwitchAccounts;
    QLabel *label_Avatar;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_ProfileUserName;
    QLineEdit *lineEdit_ProfileCountry;
    QLineEdit *lineEdit_ProfileBirthday;

    void setupUi(QDialog *accountMainWindow)
    {
        if (accountMainWindow->objectName().isEmpty())
            accountMainWindow->setObjectName(QString::fromUtf8("accountMainWindow"));
        accountMainWindow->resize(560, 439);
        pushButton = new QPushButton(accountMainWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 870, 161, 61));
        pushButton_3 = new QPushButton(accountMainWindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(970, 870, 171, 61));
        layoutWidget = new QWidget(accountMainWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(960, 540, 54, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ProfileUserName = new QLabel(layoutWidget);
        label_ProfileUserName->setObjectName(QString::fromUtf8("label_ProfileUserName"));

        verticalLayout_2->addWidget(label_ProfileUserName);

        label_ProfileCountry = new QLabel(layoutWidget);
        label_ProfileCountry->setObjectName(QString::fromUtf8("label_ProfileCountry"));

        verticalLayout_2->addWidget(label_ProfileCountry);

        label_ProfileBirthday = new QLabel(layoutWidget);
        label_ProfileBirthday->setObjectName(QString::fromUtf8("label_ProfileBirthday"));

        verticalLayout_2->addWidget(label_ProfileBirthday);

        pushButton_2 = new QPushButton(accountMainWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(770, 870, 151, 61));
        layoutWidget_2 = new QWidget(accountMainWindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(1040, 510, 161, 121));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        pushButton_close2 = new QPushButton(accountMainWindow);
        pushButton_close2->setObjectName(QString::fromUtf8("pushButton_close2"));
        pushButton_close2->setGeometry(QRect(270, 330, 171, 61));
        pushButton_Avatar = new QPushButton(accountMainWindow);
        pushButton_Avatar->setObjectName(QString::fromUtf8("pushButton_Avatar"));
        pushButton_Avatar->setGeometry(QRect(80, 230, 111, 31));
        pushButton_SwitchAccounts = new QPushButton(accountMainWindow);
        pushButton_SwitchAccounts->setObjectName(QString::fromUtf8("pushButton_SwitchAccounts"));
        pushButton_SwitchAccounts->setGeometry(QRect(100, 330, 151, 61));
        label_Avatar = new QLabel(accountMainWindow);
        label_Avatar->setObjectName(QString::fromUtf8("label_Avatar"));
        label_Avatar->setEnabled(true);
        label_Avatar->setGeometry(QRect(50, 70, 181, 141));
        label_Avatar->setAutoFillBackground(true);
        label_Avatar->setFrameShadow(QFrame::Sunken);
        label_Avatar->setPixmap(QPixmap(QString::fromUtf8("../build-QTUserProfile-Desktop_x86_windows_msvc2019_pe_64bit-Debug/blank_avatar_image.jpg")));
        label_Avatar->setScaledContents(true);
        layoutWidget1 = new QWidget(accountMainWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(280, 60, 231, 171));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEdit_ProfileUserName = new QLineEdit(layoutWidget1);
        lineEdit_ProfileUserName->setObjectName(QString::fromUtf8("lineEdit_ProfileUserName"));
        lineEdit_ProfileUserName->setEnabled(false);

        verticalLayout_4->addWidget(lineEdit_ProfileUserName);

        lineEdit_ProfileCountry = new QLineEdit(layoutWidget1);
        lineEdit_ProfileCountry->setObjectName(QString::fromUtf8("lineEdit_ProfileCountry"));
        lineEdit_ProfileCountry->setEnabled(false);

        verticalLayout_4->addWidget(lineEdit_ProfileCountry);

        lineEdit_ProfileBirthday = new QLineEdit(layoutWidget1);
        lineEdit_ProfileBirthday->setObjectName(QString::fromUtf8("lineEdit_ProfileBirthday"));
        lineEdit_ProfileBirthday->setEnabled(false);

        verticalLayout_4->addWidget(lineEdit_ProfileBirthday);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(accountMainWindow);

        QMetaObject::connectSlotsByName(accountMainWindow);
    } // setupUi

    void retranslateUi(QDialog *accountMainWindow)
    {
        accountMainWindow->setWindowTitle(QCoreApplication::translate("accountMainWindow", "User Profile Account", nullptr));
        pushButton->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("accountMainWindow", "Close", nullptr));
        label_ProfileUserName->setText(QCoreApplication::translate("accountMainWindow", "Username:", nullptr));
        label_ProfileCountry->setText(QCoreApplication::translate("accountMainWindow", "Country:", nullptr));
        label_ProfileBirthday->setText(QCoreApplication::translate("accountMainWindow", "Birthday:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("accountMainWindow", "Switch Accounts", nullptr));
        pushButton_close2->setText(QCoreApplication::translate("accountMainWindow", "Close", nullptr));
        pushButton_Avatar->setText(QCoreApplication::translate("accountMainWindow", "Change Avatar", nullptr));
        pushButton_SwitchAccounts->setText(QCoreApplication::translate("accountMainWindow", "Switch Accounts", nullptr));
        label_Avatar->setText(QString());
        label_4->setText(QCoreApplication::translate("accountMainWindow", "Username:", nullptr));
        label_5->setText(QCoreApplication::translate("accountMainWindow", "Country:", nullptr));
        label_6->setText(QCoreApplication::translate("accountMainWindow", "Birthday:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountMainWindow: public Ui_accountMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTMAINWINDOW_H
