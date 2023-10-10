#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outPut;
    ifstream inPut;

    outPut.open("prac_10_2.txt", ios::binary);
    outPut.write("Hello Team", 10);
    outPut.close();

    inPut.open("prac_10_2.txt", ios::binary);
    char string[20];
    inPut.read(string, 10);
    string[10] = '\0';
    cout << string << endl;
    inPut.close();

    return 0;
}