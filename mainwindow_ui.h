#ifndef MAINWINDOW_UI_H
#define MAINWINDOW_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");

        //set to 720x480
        MainWindow->resize(720, 480);
        MainWindow->setWindowTitle(QString("DEBUG"));

        //QMetaObject::connectSlotsByName(MainWindow);
    }

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Empty Window", nullptr));
    }
};

namespace Ui {
class MainWindow: public Ui_MainWindow {};
}

QT_END_NAMESPACE

#endif // MAINWINDOW_UI_H
