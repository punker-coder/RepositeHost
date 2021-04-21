#include <iostream>
#include <iomanip>
#include <fstream>
#include "Operations.h"
using namespace std;
//Операции над матрицами
void printhelp()
{
    cout << "Choose a operation:\n" << "-r - swap a row\n" << "-c - swap a column\n" << "-t - transposition\n" << "-h - help\n";
}
//Вывод ошибки
void printerror()
{
    cout << "ERROR\n";
}
//Наполнение матрицы
void FillArray(int a[5][5], const int ROW, const int COL)
{
    int i, j;
    ifstream f("input.txt");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++) f >> a[i][j];
    }
}
//Вывод массива
void PrintArray(int a[5][5], const int ROW, const int COL)
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++) cout << setw(7) << a[i][j];
        cout << endl;
    }
}

void SWAPROW(int a[5][5], const int COL)
{
    int k, p, i, j;
    FillArray(a, 5, 5);
    PrintArray(a, 5, 5);
    cout << "Input number row, which you want to edit: ";
    cin >> k;
    cout << "Input number row, which replaced by: ";
    cin >> p;
    for (j = 0; j < COL; j++) swap(a[k - 1][j], a[p - 1][j]);
    PrintArray(a, 5, 5);
}

void SWAPCOL(int a[5][5], const int ROW)
{
    int k, p, i, j;
    FillArray(a, 5, 5);
    PrintArray(a, 5, 5);
    cout << "Input number column, which you want to edit: ";
    cin >> k;
    cout << "Input number column, which replaced by: ";
    cin >> p;
    for (i = 0; i < ROW; i++) swap(a[i][k - 1], a[i][p - 1]);
    PrintArray(a, 5, 5);
}

void TRANSP(int a[5][5], const int ROW, const int COL)
{
    int i, j;
    cout << "Original matrix:\n";
    FillArray(a, 5, 5);
    PrintArray(a, 5, 5);
    cout << "Transporated martix:\n";
    for (j = 0; j < COL; j++)
    {
        for (i = 0; i < ROW; i++) cout << setw(7) << a[i][j];
        cout << endl;
    }
}