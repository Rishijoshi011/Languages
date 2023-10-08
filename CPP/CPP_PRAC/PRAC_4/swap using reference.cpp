#include<iostream>
	using namespace std;
	 int swap(int & n, int & n2)
	{
		int temp=0;
		temp=n;
		n=n2;
		n2=temp;
	}	
	int main()
{
	system("COLOR 0B");
	int m=11,b=7;
	cout << "m = " << m << "\tb = " << b << endl;
	swap(m,b);
	cout << "m = " << m << "\tb = " << b << endl; 
	return 0;
}
