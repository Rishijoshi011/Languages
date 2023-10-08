#include<iostream>
#define reference_of_m m2
	using namespace std;	
	int main()
{
	system("COLOR 0B");
	int m=11, & reference_of_m = m;
	cout << "Address of variable : " << &m << endl;
	cout << "Address of Reference variable : " << &m2 << endl; 
	return 0;
}	
