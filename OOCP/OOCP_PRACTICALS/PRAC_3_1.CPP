#include <iostream>

using namespace std;

class Student
{
    int rollNo, marks[4], totalMarks = 0;
    char name[20];

public:
    void set()
    {
        cout << "Enter Enrollment No: " << endl;
        cin >> rollNo;
        cout << "Enter Name: " << endl;
        cin.ignore();
        cin.getline(name, 20);
        cout << "Enter marks: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void get()
    {
        cout << "Enrollment No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << endl;
            totalMarks += marks[i];
        }
    }

    void total()
    {
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Student st;
    st.set();
    st.get();
    st.total();
}