#include <iostream>
#include <fstream>
#include <iomanip> 

using namespace std;

int main()
{
    ifstream inPut;
    inPut.open("tel.txt", ios::in);

    string name;
    int number;

    while (inPut >> name >> number)
    {
        cout << left << setw(20) << name << right << setw(10) << number << endl;
    }

    inPut.close();
    return 0;
}