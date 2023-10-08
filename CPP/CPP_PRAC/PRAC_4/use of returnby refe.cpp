#include<iostream>
#define return_by_reference re
	
	using namespace std;
	
	int m=11;
	int &m2 = m;
	inline int & return_by_reference()
{
	return m2;
}
	int main()
{
	system("COLOR 0B");
	int store=0;
	store = re();
	cout << "Use of return by reference : " << store << endl;
	return 0;
}
