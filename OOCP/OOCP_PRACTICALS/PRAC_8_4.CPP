#include <iostream>
#include <cstring>

using namespace std;

class String
{
    char str[20];

public:
    void set()
    {
        cout << "Enter string" << endl;
        cin.getline(str, 20);
    }

    String operator+(const String &other)
    {
        String result;
        strcpy(result.str, str);
        strcat(result.str, " ");
        strcat(result.str, other.str);
        return result;
    }

    void display()
    {
        cout << "Full concatenated: " << str << endl;
    }
};

int main()
{
    String str, str2, concatenated;

    str.set();
    str2.set();

    concatenated = str + str2;

    concatenated.display();

    return 0;
}
