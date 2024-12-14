// 1.create a program for matrix operation(addition) in c++:
#include <iostream>
using namespace std;
void displayMatrix(int **matrix, int rows, int cols)
{
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void addMatrices(int **matrix1, int **matrix2, int **result, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
int **createMatrix(int rows, int cols)
{
    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }
    return matrix;
}
void deleteMatrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main()
{
    const int rows = 3;
    const int cols = 3;
    int **matrix1 = createMatrix(rows, cols);
    int **matrix2 = createMatrix(rows, cols);
    int **result = createMatrix(rows, cols);
    int initMatrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int initMatrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix1[i][j] = initMatrix1[i][j];
            matrix2[i][j] = initMatrix2[i][j];
        }
    }
    addMatrices(matrix1, matrix2, result, rows, cols);
    cout << "Resultant Matrix after Addition:" << endl;
    displayMatrix(result, rows, cols);
    deleteMatrix(matrix1, rows);
    deleteMatrix(matrix2, rows);
    deleteMatrix(result, rows);

    return 0;
}