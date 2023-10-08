#include<iostream>
#define account_holder_name name
#define account_holder_balance bal

	using namespace std;

	class account
{
	char account_holder_name[20];
	static int account_holder_balance;	
	
	public:
		void get_name()
	{
		cout << "Enter account holder name" << endl;
		cin >> name;
	}
		static void get_bal()
	{
		cout << "Enter your amount" << endl;
		cin >> bal;
	} 
		static void credit(int &temp)
	{
		cout << "Enter credit" << endl;
		cin >> temp;
		temp = temp + bal;
		cout << "Total amount : " << temp << endl;
	}
		static void debit(int &temp)
	{
		cout << "Enter debit" << endl;
		cin >> temp;
		temp = bal - temp;
		cout << "Total amount : " << temp << endl;
	}
};
int account::account_holder_balance;
	int main()
{
    system("COLOR 0B");
	account amt,amt2;
	int temp,temp2;
	amt.get_name();
	amt.get_bal();
	amt.credit(temp);
	amt2.debit(temp2);
}
