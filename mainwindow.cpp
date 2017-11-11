#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "poligono.h"
#include "arco.h"
#include "cubo.h"
#include "prismatriangular.h"
#include "prismarectangular.h"
#include "cono.h"

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

// Opens a new window for polygon interface
void MainWindow::on_pushButton_clicked()
{
  poligono poli;
  poli.setModal(true);
  poli.exec();
}

// Opens a new window for arc interface
void MainWindow::on_pushButton_2_clicked()
{
  arco arc;
  arc.setModal(true);
  arc.exec();
}

// Opens a new window for cube interface
void MainWindow::on_pushButton_3_clicked()
{
  cubo cu;
  cu.setModal(true);
  cu.exec();
}

// Opens a new window for triangular prism interface
void MainWindow::on_pushButton_4_clicked()
{
  prismaTriangular prismaT;
  prismaT.setModal(true);
  prismaT.exec();
}

// Opens a new window for Rectangular Prism interface
void MainWindow::on_pushButton_5_clicked()
{
  PrismaRectangular prismaR;
  prismaR.setModal(true);
  prismaR.exec();
}

// Opens a new window for cone interface
void MainWindow::on_pushButton_6_clicked()
{
  cono co;
  co.setModal(true);
  co.exec();
}
