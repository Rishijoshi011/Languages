#include<iostream>
#include<string.h>

	using namespace std;

	class name
{
	int l;
	char *fnm;	

	public:
		name() : l(0) {}
		name(char *x)
	{
		l = strlen(x);
		fnm = new char[l+1];
		strcpy(fnm,x);
	}
	 void print()
	{
		cout << "Name is : " << fnm << endl; 
	}
};
	int main()
{
    system("COLOR 0B");
    name n1("Rishi");
    n1.print();
}
