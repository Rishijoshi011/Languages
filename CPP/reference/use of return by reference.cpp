#include<iostream>
#define return_by_reference re
	
	using namespace std;
	
	int m=11;
	inline int & return_by_reference()
{
	return m;
}
	int main()
{
	system("COLOR 0B");
	int store=0;
	store = re();
	cout << "Use of return by reference : " << store << endl;
	return 0;
}
