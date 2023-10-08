#include<iostream>
int m = 11;
	using namespace std;
	int main ()
{
	system("COLOR 0B");
	int m=7;
	cout << "Use of scope resoulution operator : " << ::m << endl;
	cout << "Local variable : " << m << endl;
	return 0;
}
