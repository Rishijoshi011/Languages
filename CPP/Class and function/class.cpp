#include <iostream>
using namespace std;
	class weapon
{
	char name[10];
	float price;
	int rounds;
	int qun;
	 public:
	 void get()
	{
		cout <<"Enter weapon Name, Price(In $), Quantity and Rounds" << endl;
		cin >> name >> price >> rounds >> qun;
	}
	 void put()
	{
		cout << "Name     : " << name << endl;
		cout << "Price    : " << price << endl;
		cout << "Quantity : " << qun << endl;
		cout << "Rounds   : " << rounds << '\n'<< endl;
	}	
	 void total(weapon x)
	{
		price+=x.price;	
		cout << "Total amount of your order :" << price << endl;
	}	
};
	int main()
{
	weapon deck[10];
	int i,n;
	cout << "How many Deck do you want to buy" << endl;
	cin >> n;
	 for(i = 0; i < n; i++)
	{
		deck[i].get();	
	}
	system("cls");
	 for(i = 0; i < n; i++)
	{
		deck[i].put();	
	}
	 for(i = 0; i < n; i++)
	{
		deck[i].total(deck[i]);
		break;
	}	
	return 0;
}
