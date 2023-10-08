#include<iostream>
    using namespace std; 
	int main()
{
	system("COLOR 0B");
	int num,sum=1;
	cout << "Enter any number" << endl;
    cin >> num;  
	 do 
	{
		sum*=num;
		num--;
	}
	while(num>1);
	cout << "Total : " << sum << endl;
	return 0;
}
