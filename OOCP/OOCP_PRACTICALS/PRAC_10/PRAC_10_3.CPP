#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outPut("prac_10_3.txt");

    // Use of manipulators to format data
    outPut << setw(10) << left << "Name" << setw(10) << right << "Age" << endl;
    outPut << setw(10) << left << "Chandler" << setw(10) << right << 33 << endl;
    outPut << setw(10) << left << "Joey" << setw(10) << right << 28 << endl;
    outPut << setw(10) << left << "Monica" << setw(10) << right << 30 << endl;

    outPut.close();

    ifstream inPut("prac_10_3.txt");

    string line;

    cout << "Reading file with manipulators:" << endl;
    while (getline(inPut, line))
    {
        cout << line << endl;
    }

    inPut.close();

    inPut.open("prac_10_3.txt");

    if (!inPut)
    {
        cerr << "Error opening the file." << endl;
        return;
    }

    // Move the file pointer to the beginning of the second line
    inPut.seekg(20, ios::beg);

    cout << "\nReading file with file pointer manipulation:" << endl;
    while (getline(inPut, line))
    {
        cout << line << endl;
    }

    inPut.close();

    return 0;
}