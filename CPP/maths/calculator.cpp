#include<iostream>
using namespace std;
int main() 
{
	system("COLOR 0B");
	int num,num2;
	char sign;
	cout << "Enter any two number" << endl;
	cin >> num >> num2;
	cout << "Press + for Addition" << endl;
	cout << "Press - for Substraction" << endl;
	cout << "Press * for Multiplication" << endl;
	cout << "Press / for Division" << endl;
	cout << "Enter opraton" << endl;
	fflush(stdin);
	cin >> sign;
	 switch (sign)
	{
		case '+' : cout << num + num2 << endl;
		break;
		case '-' : cout << num - num2 << endl;
		break;
		case '*' : cout << num * num2 << endl;
		break;
		case '/' : cout << num / num2 << endl;
		break;
		deafault :cout << "Erorr 404" << endl;
	}
	 return 0;
}
