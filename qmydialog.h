#ifndef QMYDIALOG_H
#define QMYDIALOG_H

#include <QWidget>
#include <QDialog>

QT_BEGIN_NAMESPACE
class QCheckBox;
class QLabel;
class QErrorMessage;
QT_END_NAMESPACE

class DialogOptionsWidget;

namespace Ui {
class QmyDialog;
}

class Dialog1 : public QWidget
{
    Q_OBJECT

public:
    Dialog1(QWidget *parent = 0);

private slots:
    void setInteger();
    void setDouble();
    void setItem();
    void setText();
    void setMultiLineText();
    void setColor();
    void setFont();
    void setExistingDirectory();
    void setOpenFileName();
    void setOpenFileNames();
    void setSaveFileName();
    void criticalMessage();
    void informationMessage();
    void questionMessage();
    void warningMessage();
    void errorMessage();

private:
    QLabel *integerLabel;
    QLabel *doubleLabel;
    QLabel *itemLabel;
    QLabel *textLabel;
    QLabel *multiLineTextLabel;
    QLabel *colorLabel;
    QLabel *fontLabel;
    QLabel *directoryLabel;
    QLabel *openFileNameLabel;
    QLabel *openFileNamesLabel;
    QLabel *saveFileNameLabel;
    QLabel *criticalLabel;
    QLabel *informationLabel;
    QLabel *questionLabel;
    QLabel *warningLabel;
    QLabel *errorLabel;
    QErrorMessage *errorMessageDialog;
    DialogOptionsWidget *fileDialogOptionsWidget;
    DialogOptionsWidget *colorDialogOptionsWidget;
    DialogOptionsWidget *fontDialogOptionsWidget;
    QString openFilesPath;
    Ui::QmyDialog *ui_my;
};


#endif // QMYDIALOG_H
