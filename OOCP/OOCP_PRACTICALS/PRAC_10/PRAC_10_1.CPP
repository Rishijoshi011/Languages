#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outPut;
    ifstream inPut;

    outPut.open("prac_10_1.txt", ios::out);
    outPut.write("Hello ", 6);
    outPut.put('T') << endl;

    outPut.close();

    inPut.open("prac_10_1.txt", ios::in);
    char c = inPut.get();
    cout << c << endl;

    inPut.seekg(0);
    char string[10];
    inPut.getline(string, 10);
    cout << string << endl;

    inPut.close();
    return 0;
}