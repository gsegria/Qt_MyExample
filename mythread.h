// mythread.h

#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>
#include <QtGui>

class MyThread_One : public QThread
{
public:
    // constructor
    // set name using initializer
    explicit MyThread_One(QString s);

    // overriding the QThread's run() method
    void run();
private:
    QString name;
};


class MyThread_Two : public QThread
{
public:
    // constructor
    // set name using initializer
    explicit MyThread_Two(QString s);

    // overriding the QThread's run() method
    void run();
private:
    QString name;
};





#endif // MYTHREAD_H
