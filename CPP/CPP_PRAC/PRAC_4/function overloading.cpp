#include<iostream>
	using namespace std;
	
	int square(int l, int b)
{
	cout << l*b << endl;
}
	int square(int r)
{
	cout << r*r << endl;
}
	int main()
{
	system("COLOR 0B");
	int m;
	cout << "Enter any number" << endl;
	cin >> m;
	square(m);
	return 0;
}
