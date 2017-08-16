#include "mainw_ui1.h"
#include "ui_mainw_ui1.h"
#include <QDebug>
#include <QVBoxLayout>
#include <QtWidgets/QCheckBox>

#include <QtGui>
#include <QDialog>
#include <QTabWidget>
#include <QLayout>
#include <QTextEdit>
#include <QScrollBar>

#if 1

MainW_ui1::MainW_ui1(QWidget *parent) :
    QMainWindow(parent),
    M_ui(new Ui::MainW_ui1)
{
    M_ui->setupUi(this);
    //M_ui->textEdit1->setTextColor(QColor(255,0,0));


    //Qcheck1 = new QCheckBox(tr("按鍵1"),this);
    //myLayout->addWidget(Qcheck1);
    //Qcheck1->setChecked(true);            //設定check1為打勾狀
    //checkBox1->setChecked(true);            //設定check1為打勾狀


    connect(M_ui->textEdit1, SIGNAL(textChanged()), this, SLOT(updateLabel()));
    M_ui -> textEdit1->append("In this text file, there exists ");


    //connect( this->M_ui.pushButton, SIGNAL( clicked() ), this, SLOT(pushButton_SetLabelText()) );
    connect(M_ui->radioButton1,SIGNAL(clicked()),this,SLOT(pushButton_SetLabelText()));
    connect(M_ui->radioButton2,SIGNAL(clicked()),this,SLOT(pushButton_SetLabelText()));
    connect(M_ui->checkBox1,SIGNAL(clicked()),this,SLOT(pushButton_SetLabelText()));


#if 0
    //connect(M_ui->checkBox1, SIGNAL(stateChanged(int)), checkBox11, SLOT(setEnabled(bool)));
    connect(M_ui->checkBox1, SIGNAL(toggled(bool)), this, SLOT(setEnabled(bool)));
    if(M_ui->checkBox1->isChecked())
    {
        qDebug() <<" \n--- test111 --- ";
        //textEdit1->setText("In this text file, there exists " + (QString::number(1)) + " words" );
        M_ui->textEdit1->setText("33333" );
        M_ui -> textEdit1->append("22222");
    }


    QCheckBox *pCheckBox = new QCheckBox(this);
    m_pLabel = new QLabel(this);
    connect(pCheckBox, SIGNAL(stateChanged(int)), this, SLOT(onStateChanged(intd)));
#endif



}
#if 0
void MainW_ui1::setLineEdit1Enabled(int checkState)
{
    checkBox1->setEnabled(checkBox11 == Qt::Checked);
}
#endif




MainW_ui1::~MainW_ui1()
{
    delete M_ui;
}



void MainW_ui1::pushButton_SetLabelText()
{
    if(M_ui->radioButton1->isChecked())
    {
        qDebug() <<" \n--- radioButton001 --- ";
        M_ui -> textEdit1->append("radioButton11 ");
    }
    if(M_ui->radioButton2->isChecked())
    {
        qDebug() <<" \n--- radioButton002 --- ";
        M_ui -> textEdit1->append("radioButton22 ");
    }
    if(M_ui->checkBox1->isChecked())
    {
        qDebug() <<" \n--- checkbox1 checked --- ";
        M_ui -> textEdit1->append("checkbox11 checked ");
    }
    else
    {
        qDebug() <<" \n--- checkbox1 disable --- ";
        M_ui -> textEdit1->append("checkbox11 disable ");
    }



#if 0
    QObject *object = QObject::sender();
    QRadioButton* pbtn = qobject_cast<QRadioButton*>(object);
    int aaa = pbtn->isChecked();
    if(aaa == 1)
    {
        qDebug() <<" \n--- radioButton2 --- ";

    }

  if(MainW_ui1.radioButton1.isChecked())
  {
      qDebug() <<" \n--- radioButton1 --- ";
      M_ui -> textEdit1->append("radioButton1 ");
  }

  if(MainW_ui1.radioButton2.isChecked())
  {
      qDebug() <<" \n--- radioButton2 --- ";
      M_ui -> textEdit1->append("radioButton2 ");
  }
  if(this->MainW_ui1.radioButton_2->isChecked())
  {
      this->MainW_ui1.label->setText("2 selected");
  }
#endif

}

#if 0

Form::Form(QWidget *parent)
    : QWidget(parent)
{
  ui.setupUi(this);
  connect( this->ui.pushButton, SIGNAL( clicked() ), this, SLOT(pushButton_SetLabelText()) );
  connect( this->ui.radioButton, SIGNAL( clicked() ), this, SLOT(radioButton_SetLabelText()) );
  connect( this->ui.radioButton_2, SIGNAL( clicked() ), this, SLOT(radioButton_2_SetLabelText()) );
}
void Form::pushButton_SetLabelText()
{

  if(this->ui.radioButton->isChecked())
  {
    this->ui.label->setText("1 selected");
  }

  if(this->ui.radioButton_2->isChecked())
  {
      this->ui.label->setText("2 selected");
  }

}

void Form::radioButton_SetLabelText()
{

  if(this->ui.radioButton->isChecked())
  {
    this->ui.label->setText("1 clicked");
  }

}

void Form::radioButton_2_SetLabelText()
{

  if(this->ui.radioButton_2->isChecked())
  {
    this->ui.label->setText("2 clicked");
  }
}
#endif

//
#else



#endif
