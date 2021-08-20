/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_userName;
    QLabel *label_country;
    QLabel *label_birthday;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_UserName;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_country;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *dateEdit_birthday;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_generateRandomUserName;
    QPushButton *pushButton_login;
    QPushButton *pushButton_close;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(588, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 561, 301));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 501, 211));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_userName = new QLabel(layoutWidget);
        label_userName->setObjectName(QString::fromUtf8("label_userName"));

        verticalLayout_3->addWidget(label_userName);

        label_country = new QLabel(layoutWidget);
        label_country->setObjectName(QString::fromUtf8("label_country"));

        verticalLayout_3->addWidget(label_country);

        label_birthday = new QLabel(layoutWidget);
        label_birthday->setObjectName(QString::fromUtf8("label_birthday"));

        verticalLayout_3->addWidget(label_birthday);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_UserName = new QLineEdit(layoutWidget);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));
        lineEdit_UserName->setMinimumSize(QSize(0, 20));

        horizontalLayout->addWidget(lineEdit_UserName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_country = new QComboBox(layoutWidget);
        comboBox_country->setObjectName(QString::fromUtf8("comboBox_country"));

        horizontalLayout_2->addWidget(comboBox_country);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dateEdit_birthday = new QDateEdit(layoutWidget);
        dateEdit_birthday->setObjectName(QString::fromUtf8("dateEdit_birthday"));
        dateEdit_birthday->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit_birthday->setCalendarPopup(true);
        dateEdit_birthday->setDate(QDate(2001, 1, 1));

        horizontalLayout_3->addWidget(dateEdit_birthday);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_generateRandomUserName = new QPushButton(layoutWidget);
        pushButton_generateRandomUserName->setObjectName(QString::fromUtf8("pushButton_generateRandomUserName"));

        verticalLayout_2->addWidget(pushButton_generateRandomUserName);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));

        verticalLayout_2->addWidget(pushButton_login);

        pushButton_close = new QPushButton(layoutWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        verticalLayout_2->addWidget(pushButton_close);


        horizontalLayout_5->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "User Profile Login", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label_userName->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_country->setText(QCoreApplication::translate("MainWindow", "Country:", nullptr));
        label_birthday->setText(QCoreApplication::translate("MainWindow", "Birthday:", nullptr));
        dateEdit_birthday->setDisplayFormat(QCoreApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        pushButton_generateRandomUserName->setText(QCoreApplication::translate("MainWindow", "Generate Random Username", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
