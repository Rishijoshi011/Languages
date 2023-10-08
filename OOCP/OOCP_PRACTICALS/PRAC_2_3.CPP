#include <iostream>

using namespace std;

int num = 11;

int &temp()
{
    return num;
}

int main()
{
    int store = 0;
    store = temp();
    cout << "Use of return by reference: " << store << endl;
    return 0;
}
