#include <iostream>

using namespace std;

class Matrix
{
    int row, column;
    int mat[5][5];

public:
    Matrix() : row(1), column(1) {}
    Matrix(int row, int column) : row(row), column(column) {}

    void set()
    {
        cout << "Enter Matrix values" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void get()
    {
        cout << "Matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << mat[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void addition(const Matrix &m1, const Matrix &m2, Matrix &result)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                result.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
            }
        }
    }

    void subtraction(const Matrix &m1, const Matrix &m2, Matrix &result)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                result.mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
            }
        }
    }
};

int main()
{
    Matrix m(2, 2);
    Matrix m2(2, 2);
    Matrix sum(2, 2);

    m.set();
    m2.set();

    sum.addition(m, m2, sum);
    sum.get();

    sum.subtraction(m, m2, sum);
    sum.get();

    return 0;
}