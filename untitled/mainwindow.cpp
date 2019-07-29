#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(9);
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(100);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(110);
    //ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    for(int i =0;i<9;i++)
    {
        for(int j =0;j<9;j++)
        {

            ui->tableWidget->setItem(i,j,new QTableWidgetItem("0"));
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);

        }
    }

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int grid[9][9] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        };
    for(int i=0;i<9;i++)                      //i为row
    {
        for(int j=0;j<9;j++)
        {
            int x=ui->tableWidget->item(i,j)->text().toInt();//取值
            grid[i][j]=x;
        }
    }
        if (SolveSudoku(grid) == true)
            printGrid(grid);
}
void MainWindow::printGrid(int grid[9][9])
{
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            int x=grid[row][col];
            qDebug()<<"x:"<<x;
            QString o=QString::number(x);
            ui->tableWidget->setItem(row,col,new QTableWidgetItem(o));
            ui->tableWidget->item(row,col)->setTextAlignment(Qt::AlignCenter);
        }
    }
}
bool MainWindow::SolveSudoku(int grid[9][9])
{
    qDebug()<<"in solveSudoku";
    int row, col;
    if (!FindUnassignedLocation(grid, row, col))  //如果均已求解就不用再计算了
        return true;
    for (int num = 1; num <= 9; num++)    //如果这个数字在三个维度有重复的就不断地试下一个数字
    {
        if (isSafe(grid, row, col, num))  //如果没有重复就进行计算
        {
            grid[row][col] = num;        //计算出一个结果，再递归求解
            if (SolveSudoku(grid))
                return true;
            grid[row][col] = 0;
        }
        if(num==9&&!isSafe(grid, row, col, num))
        {
           qDebug()<<"in ==9";
        }
    }
    return false;
}
bool MainWindow::FindUnassignedLocation(int grid[9][9], int &row, int &col)   //看有没有为0的行
{
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (grid[row][col] == 0)
                return true;
    return false;
}
bool MainWindow::isSafe(int grid[9][9], int row, int col, int num)
{
    qDebug()<<"in issafe";
    return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) &&!UsedInBox(grid, row - row % 3, col - col % 3, num);
}
bool MainWindow::UsedInRow(int grid[9][9], int row, int num)   //如果在行中有相同的返回TRUE，没有相同的数字返回flase
{
    for (int col = 0; col < 9; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool MainWindow::UsedInCol(int grid[9][9], int col, int num)
{
    for (int row = 0; row < 9; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool MainWindow::UsedInBox(int grid[9][9], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow][col + boxStartCol] == num)
                return true;
    return false;
}

void MainWindow::on_pushButton_2_clicked()   //清零
{
    for(int i =0;i<9;i++)
    {
        for(int j =0;j<9;j++)
        {
            ui->tableWidget->setItem(i,j,new QTableWidgetItem("0"));
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);

        }
    }
}
void MainWindow::on_P1_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("1"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P2_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("2"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P3_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("3"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P4_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("4"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P5_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("5"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P6_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("6"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P7_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("7"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P8_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("8"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P9_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("9"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}

void MainWindow::on_P0_clicked()
{
    int i =ui->tableWidget->currentRow();
    int j=ui->tableWidget->currentColumn();
    ui->tableWidget->setItem(i,j,new QTableWidgetItem("0"));
    ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignCenter);
}
