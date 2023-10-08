#include<iostream>
	using namespace std;

	int square(int l = 2)
{
	return l*l;
}
	int main()
{
	system("COLOR 0B");
	int store = 0;
	store = square();
	cout << "Use of default arguments : " << store << endl;
	return 0;
}
