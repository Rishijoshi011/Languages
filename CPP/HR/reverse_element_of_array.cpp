// the task is to reverse element of array
// for ex.m[4] = {1,4,3,2};
// output should be 2 3 4 1;

#include <iostream>

using namespace std;

int main()
{
    int m[4] = {1, 4, 3, 2};
    int size = 4;

    for (int i = 0; i < 2; i++)
    {
        int temp = m[i];
        m[i] = m[size - 1 - i];
        m[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }

    return 0;
}
// 1ST PASS         m[] = {1, 4, 3, 2};

// i = 0;
// temp = m[i];  temp = m[0]; temp = 1;
// m[i] = m[size - 1 - i]; m[0] = m[4 - 1 - 0]; m[0] = m[3];  1 = 2;
// m[size - 1 - i] = temp; m[4 - 1 - 0] = 1; m[3] = 1; 

//Result of this pass  is m[] = {2, 4, 3, 1};
// 2ND PASS     

// i = 1;
// temp = m[i]; temp = m[1]; temp = 4; 
// m[i] = m[size - 1 - i]; m[1] = m[4 - 1 - 1]; m[1] = m[2]; 4 = 3; 