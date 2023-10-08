#include<iostream>
  using namespace std;
  int main()
{
	system("COLOR 0B");
	int num,i;
	cout << "Enter any number" << endl; 
	cin >> num;
	 for(i=2;i<=num;i++)
	{
		 if(num%i==0) 
		{
			cout << "it's not" << endl;
			break;
		}
		 else
		{
			cout << "Prime number" << endl;
			break;
		}
	}
}
