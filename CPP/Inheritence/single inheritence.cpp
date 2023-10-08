#include<iostream>

    using namespace std;

    class base
    {
    private:
        int m;
    public:
        void get()
        {
            cout << "Enter value of m" << endl;
            cin >> m;
        }
        void put()
        {
            cout << "Value of m : " << m << endl;
        }
    };
    class derived : public base
{
    private:
        int m2;
    public:
        void get()
        {
            base::get();
            cout << "Enter value of m2" << endl;
            cin >> m2;
        }
        void put()
        {
            base::put();
            cout << "value of m2 : " << m2 << endl;
        }
};
    int main()
{
   system("COLOR 0B");
   derived d;
    d.get();
    d.put();
    return 0;
}