#ifndef MAINW_UI1_H
#define MAINW_UI1_H
#include "ui_mainw_ui1.h"

#include <QDialog>
#include <QMainWindow>
#include <QCheckBox>

#include <QRadioButton>
#include <QTextEdit>
#include <QtWidgets>

#if 1

namespace Ui {
class MainW_ui1;

}

#if 0
class Form : public QWidget
{
    Q_OBJECT

public:
    Form(QWidget *parent = 0);

  public slots:
    void pushButton_SetLabelText();
    void radioButton_SetLabelText();
    void radioButton_2_SetLabelText();

private:
    Ui::Form ui;
};
#endif


class MainW_ui1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainW_ui1(QWidget *parent = 0);
    ~MainW_ui1();
    bool checkBox11;


public slots:
     void pushButton_SetLabelText();
    //void radioButton_SetLabelText();
    //void radioButton_2_SetLabelText();

private:
    Ui::MainW_ui1 *M_ui;
    QVBoxLayout *myLayout;
    QCheckBox *Qcheck1;
    QCheckBox *checkBox1;
    //QTextEdit *textEdit1;
    QRadioButton radioButton1;
    QRadioButton radioButton2;

};

#else



#endif


#endif // MAINW_UI1_H
