#include<iostream>

    using namespace std;

    class a
{
  	int v_a;
  	
  	public:
  		void get()
  	{
  		cout << "Enter value of A" << endl;
		cin >> v_a;	
	}
		void print()
	{
		cout << "Value of A : " << v_a << endl;
	}
};
	
	class b : private a
{
	int v_b;
	
	public:
		void get()
	{
		a::get();
		cout << "Enter value of B" << endl;
		cin >> v_b;
	}
		void print()
	{
		a::print();
		cout << "Value of B : " << v_b << endl;
	}
};
	class c : public b
{
	int v_c;
	
	public:
		void get()
	{
		b::get();
		cout << "Enter value of C" << endl;
		cin >> v_c;		
	}	
		void print()
	{
		b::print();
		cout << "Value of C : " << v_c << endl;
	}
};
  	int main()
{
	system("COLOR 0B");
	c c1;
	c1.get();
	c1.print();
}
