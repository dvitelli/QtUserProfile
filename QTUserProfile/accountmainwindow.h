#ifndef ACCOUNTMAINWINDOW_H
#define ACCOUNTMAINWINDOW_H

#include <QDialog>
#include <QFileDialog>
#include "mainwindow.h"

namespace Ui {
class accountMainWindow;
}

class accountMainWindow : public QDialog
{
    Q_OBJECT

public:
     explicit accountMainWindow(QWidget *parent = nullptr);
    ~accountMainWindow();


private slots:

    void on_pushButton_close2_clicked();

    void on_pushButton_Avatar_clicked();

    void on_pushButton_SwitchAccounts_clicked();

private:
    Ui::accountMainWindow *ui;
    MainWindow *mainWin;
};

#endif // ACCOUNTMAINWINDOW_H
