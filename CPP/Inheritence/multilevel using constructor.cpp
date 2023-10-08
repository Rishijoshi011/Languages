#include<iostream>

    using namespace std;

    class a
{
   int v_a;
   
   public : 
   		a(int x)
   	{
   		v_a = x;
	}
		void print()
	{
		cout << "v_a : " << v_a << endl;
	}
};
	class b : public a
{
	int v_b;
	
	public :
		b(int x, int y) : a(x)
	{
		v_b = y;	
	}
		void print()	
	{
		a::print();
		cout << "v_b : " << v_b << endl;	
	}	
};
	class c : public b
{
	int v_c;
	
	public:
	 	c(int x,int y,int z) : b(x,y)
	{
		v_c = z;	
	}	
		void print()
	{
		b::print();
		cout << "v_c : " << v_c << endl;	
	}	
};

  	int main()
{
	system("COLOR 0B");
	c c1(11,12,13);
	c1.print();
}
