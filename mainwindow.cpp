#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");
    QTreeWidgetItem* item=new QTreeWidgetItem(QStringList()<<"力量");
    //顶层
    ui->treeWidget->addTopLevelItem(item);
    //追加子节点
    QStringList hero;
    hero<<"df"<<"ieo";
    QTreeWidgetItem* li=new QTreeWidgetItem(hero);
    item->addChild(li);
    //TAblewidget!!!!!!!!!!!!!!!!!!!!!!
    //设置列数
    ui->tableWidget->setColumnCount(3);
    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"s"<<"rw"<<"d");
    //设置行数
    ui->tableWidget->setRowCount(5);
    //设置内容
    //ui->tableWidget->setItem(0,0,new QTableWidgetItem("yds"));
    QStringList namelist;
    namelist<<"er"<<"e"<<"eiru"<<"io";
    for (int i=0;i<4;i++) {
        int j=0;
        ui->tableWidget->setItem(i,j++,new QTableWidgetItem(namelist[i]));

        }





}

MainWindow::~MainWindow()
{
    delete ui;
}

