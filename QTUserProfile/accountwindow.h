#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

#include <QMainWindow>

namespace Ui {
class accountWindow;
}

class accountWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit accountWindow(QWidget *parent = nullptr);
    ~accountWindow();

private:
    Ui::accountWindow *ui;
};

#endif // ACCOUNTWINDOW_H
