#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createMenus();
    createToolbars();
    createSidebars();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createMenus()
{
}

void MainWindow::createToolbars()
{
}

void MainWindow::createSidebars()
{
}
