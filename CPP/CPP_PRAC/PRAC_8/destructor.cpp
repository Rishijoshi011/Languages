#include<iostream>

	using namespace std;

	class demo
{
	public:
		demo()
	{
		cout << "Constructor\n" << endl;
	}
		~demo()
	{
		cout << "Destructor\n" << endl;
	}
};
	int main()
{
    system("COLOR 0B");
	demo d1,d2,d3;
	cout << ".................................\n" << endl;
}
