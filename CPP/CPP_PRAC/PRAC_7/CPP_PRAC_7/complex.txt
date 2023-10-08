#include <iostream>
#include<conio.h>
	using namespace std;

	class complex
{

    int real;
    int img;

	public:
    	void get()
    {
        cout << "Enter the real part and img part" << endl;
        cin >> real >> img;
    }

    	void sum(complex o1, complex o2)
    {
        real = o1.real + o2.real;
        img = o1.img + o2.img;
    }

    	void print()
    {
        cout << "Your complex Number is " << real << " + " << img << "i" << endl;
    }
};

	int main()
{
    system("COLOR 0B");
	complex c1, c2, c3;
    c1.get();
    c1.print();
    c2.get();
    c2.print();
    cout << "After addition : " << endl;
 	system("cls");
    c3.sum(c1, c2);
    c3.print();
    return 0;
}
