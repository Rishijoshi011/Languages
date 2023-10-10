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

    Matrix operator+(Matrix &m)
    {
        if ((row != m.row) || (column != m.column))
        {
            cout << "Matrix Dimension are not same" << endl;
            return Matrix(0, 0);
        }
        else
        {
            Matrix result(row, column);
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    result.mat[i][j] = mat[i][j] + m.mat[i][j];
                }
            }
            return result;
        }
    }

    Matrix operator-(Matrix &m)
    {
        if ((row != m.row) && (column != m.column))
        {
            cout << "Matrix Dimension are not same" << endl;
            return Matrix(0, 0);
        }
        else
        {
            Matrix result(row, column);
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    result.mat[i][j] = this->mat[i][j] - m.mat[i][j];
                }
            }
            return result;
        }
    }
};

int main()
{
    Matrix m(2, 2);
    Matrix m2(3, 3);
    Matrix sum(2, 2);

    m.set();
    m2.set();

    sum = m + m2;
    sum.get();

    sum = m - m2;
    sum.get();

    return 0;
}
