#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDebug>
#include<QString>
#include<cstring>
#include<string>
#include<cstdlib>
#include<QMessageBox>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_P1_clicked();
    void on_P2_clicked();
    void on_P3_clicked();
    void on_P4_clicked();
    void on_P5_clicked();
    void on_P6_clicked();
    void on_P7_clicked();
    void on_P8_clicked();
    void on_P9_clicked();
    void on_P0_clicked();

private:
    Ui::MainWindow *ui;
    bool FindUnassignedLocation(int grid[9][9], int &row, int &col);
    bool isSafe(int grid[9][9], int row, int col, int num);
    bool SolveSudoku(int grid[9][9]);
    bool UsedInRow(int grid[9][9], int row, int num);
    bool UsedInCol(int grid[9][9], int col, int num);
    bool UsedInBox(int grid[9][9], int boxStartRow, int boxStartCol, int num);
    void printGrid(int grid[9][9]);
};

#endif // MAINWINDOW_H
