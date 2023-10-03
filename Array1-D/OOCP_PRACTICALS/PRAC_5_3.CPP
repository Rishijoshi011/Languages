#include <iostream>

using namespace std;

class Currency
{
    int rupee, paisa;

public:
    Currency() : rupee(0), paisa(0) {}
    Currency(int rupee, int paisa) : rupee(rupee), paisa(paisa) {}

    int get(){
        cout << "Rupee: " << rupee << "\tPaisa: " << paisa << endl;
    }

    friend Currency addCurrency(Currency c, Currency c2);
};

Currency addCurrency(Currency c, Currency c2)
{
    c.rupee += c2.rupee;
    c.paisa += c2.paisa;

    return c;
}

int main()
{
    Currency c(100,25);
    Currency c2(50,25);
    Currency sum;

    sum = addCurrency(c,c2);
    sum.get();
    
    return 0;
}