#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
    int emp_id;
    string name;
    int salary; // assuming 20 bucks per hour

public:
    Employee(int emp_id, const string &name) : emp_id(emp_id), name(name) {}

    virtual void computePay(int hours) = 0;
};

class Male : public Employee
{
public:
    Male(int emp_id, const string &name) : Employee(emp_id, name){};

    void computePay(int hours)
    {
        salary = 20 * hours;
    }

    void get()
    {
        cout << "Employee Id: " << emp_id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

class Female : public Employee
{
public:
    Female(int emp_id, const string &name) : Employee(emp_id, name){};

    void computePay(int hours)
    {
        salary = 20 * 40;
    }

    void get()
    {
        cout << "\nEmployee Id: " << emp_id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

int main()
{
    Male m(11, "Chandler Bing");
    Female f(12, "Monica Bing");

    m.computePay(30);
    f.computePay(30);

    m.get();
    f.get();

    return 0;
}
