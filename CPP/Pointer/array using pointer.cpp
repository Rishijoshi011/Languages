#include<iostream>

	using namespace std;

	class matrix
{
	int *f;	
	int d;
	
	public:
		matrix() : d(0) {}
		matrix(int x)
	{
		d = x;  
		f = new int [d];
		cout << "Enter elements of array" << endl;
		 for(int i = 0; i < d; i++)
		{
			cin >> f[i];	
		}
	}
	 void display()
	{
		 for(int i = 0; i < d; i++)
		{
			cout << f[i] << "  "; 	
		}
	} 
};

	int main()
{
    system("COLOR 0B");
	int a;
	cout << "Enter the size of an array" << endl;
	cin >> a;
    matrix n1(a);
    cout << "Elements are : ";
    n1.display();
}
