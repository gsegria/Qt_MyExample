

// mythread.cpp

#include "mythread.h"
#include <QDebug>
#include <QStorageInfo>

//#include "scsi.h"
//#include "wdf.h"
//#include "wudfusb.h"


MyThread_One::MyThread_One(QString s) : name(s)
{
}

// We overrides the QThread's run() method here
// run() will be called when a thread starts
// the code will be shared by all threads

#if 1
void MyThread_One::run()
{
    for(int i = 0; i <= 500; i++)
    {
        qDebug() << this->name << " " << i;
    }
    qDebug() << this->name << " \n--- END --- ";
    //return 0;

#if _StorageInfo

    QStorageInfo storage = QStorageInfo::root();

       qDebug() << storage.rootPath();
       if (storage.isReadOnly())
           qDebug() << "isReadOnly:" << storage.isReadOnly();

       qDebug() << "name:" << storage.name();
       qDebug() << "fileSystemType:" << storage.fileSystemType();
       qDebug() << "size:" << storage.bytesTotal()/1000/1000 << "MB";
       qDebug() << "availableSize:" << storage.bytesAvailable()/1000/1000 << "MB";
       qDebug() << "bytesTotal:" << storage.bytesTotal();
       qDebug() << "displayName:" << storage.displayName();
#endif

}
#endif




MyThread_Two::MyThread_Two(QString s) : name(s)
{
}

// We overrides the QThread's run() method here
// run() will be called when a thread starts
// the code will be shared by all threads

#if 1
void MyThread_Two::run()
{
    for(int i = 0; i <= 1000; i++)
    {
        qDebug() << this->name << " " << i;
    }
    qDebug() << this->name << " \n--- END --- ";
    //return 0;

}
#endif
