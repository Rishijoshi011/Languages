#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inPut;
    ofstream outPut;

    inPut.open("source file.txt");
    outPut.open("destination.txt");

    char string[30];
    while (!inPut.eof())
    {
        inPut.read(string,sizeof(string));
        outPut.write(string,inPut.gcount());
    }
        

    inPut.close();
    outPut.close();

    return 0;
}