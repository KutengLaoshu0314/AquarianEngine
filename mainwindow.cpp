//DEBUG
#include <QDebug>
#include <QTextStream>
//END

#include "mainwindow.h"
#include "mainwindow_ui.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , MainEngine()
{
    ui->setupUi(this);
    //this->setWindowTitle("HELLO");

    QTextStream(stdout) << MainEngine.handle().toString() << Qt::endl;
    qDebug() << "Debug message from QTest";



}

MainWindow::~MainWindow()
{
    delete ui;

}
