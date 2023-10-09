#include <iostream>

using namespace std;

class Paisa; 

class Rupee
{
    int rupee;

public:
    Rupee() : rupee(0) {}
    void set(int rupee) { this->rupee = rupee; }
    int get() const { return rupee; }

    int convertToPaisa(const Paisa &p)
    {
        return (rupee * 100 + p.get());
    }
};

class Paisa
{
    int paisa;

public:
    Paisa() : paisa(0) {}
    void set(int paisa) { this->paisa = paisa; }
    int get() const { return paisa; }

    int convertToRupee(const Rupee &r)
    {
        return (r.get() / 100 + paisa);
    }
};

int main()
{
    Rupee r;
    Paisa p;

    r.set(10);
    cout << "Paisa: " << r.convertToPaisa(p) << endl;

    p.set(100);
    cout << "Rupee: " << p.convertToRupee(r) << endl;

    return 0;
}
