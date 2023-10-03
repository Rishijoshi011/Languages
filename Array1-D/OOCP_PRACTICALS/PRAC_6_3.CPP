#include <iostream>

using namespace std;

class Scheme
{
    int schemeID;
    char schemeName[20];
    float outGoingRate, messageCharge;

public:
    void setSchemeData()
    {
        cout << "Enter scheme ID" << endl;
        cin >> schemeID;
        cout << "Enter scheme name" << endl;
        cin.ignore();
        cin.getline(schemeName, 20);
        cout << "Enter out-going rate" << endl;
        cin >> outGoingRate;
        cout << "Enter message charge" << endl;
        cin >> messageCharge;
    }

    void displaySchemeData()
    {
        cout << "Scheme Id: " << schemeID << endl;
        cout << "Name: " << schemeName << endl;
        cout << "Out going Rate: " << outGoingRate << endl;
        cout << "message Charge: " << messageCharge << endl;
    }
};

class Customer : public Scheme
{
    int customerID;
    char customerName[20];
    long long int mobileNo;

public:
    void setCustomerData()
    {
        cout << "Enter customer Id" << endl;
        cin >> customerID;
        cout << "Enter customer name" << endl;
        cin.ignore();
        cin.getline(customerName, 20);
        cout << "Enter mobile no" << endl;
        cin >> mobileNo;
    }

    void displayCustomerData()
    {
        cout << "Customer Id: " << customerID << endl;
        cout << "Name: " << customerName << endl;
        cout << "Mobile No: " << mobileNo << endl;
    }
};

int main()
{
    int choice = 0;
    Customer cust;

    do
    {
        cout << "\n\n1. Enter Scheme Data" << endl;
        cout << "2. Show Scheme Data" << endl;
        cout << "3. Enter Customer Data" << endl;
        cout << "4. Show Customer Data" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cust.setSchemeData();
            break;

        case 2:
            cust.displaySchemeData();
            break;

        case 3:
            cust.setCustomerData();
            break;

        case 4:
            cust.displayCustomerData();
            break;

        case 5:
            exit(0);
            break;

        default:
            break;
        }
    } while (choice != 5);

    return 0;
}