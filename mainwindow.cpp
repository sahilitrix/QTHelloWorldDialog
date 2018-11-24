#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "helloworlddialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    HelloWorldDialog dialog;
    dialog.setModal(true);
    dialog.exec();
}
