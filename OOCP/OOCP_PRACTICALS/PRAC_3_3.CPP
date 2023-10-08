#include <iostream>

using namespace std;

class Demo {
public:
    static int num;
    void set(int num){
        this->num = num;
    }
    static int get() {
        return num;
    }
};

int Demo::num; 

int main() {
    int num = 11;
    Demo d;
    d.set(7);
    cout << "Local num: " << num << endl;
    cout << "Class num: " << Demo::num << endl; 
    cout << "Function using Scope operator: " << Demo::get() << endl;

    return 0;
}
