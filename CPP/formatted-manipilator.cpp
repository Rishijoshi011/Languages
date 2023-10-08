// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {                               //  1st
//     float x = +30.350;
//     cout << setw(10);
//     cout << setfill('*');
//     cout << setiosflags(ios::showpos);
//     cout << setprecision(3);
//     cout << fixed;
//     cout << x << endl;
//     return 0;
//}
// 2rd
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     float x = -3.11e2;
//     cout << setw(12);
//     cout << setfill('*');
//     cout << setiosflags(ios::scientific);
//     cout << setiosflags(ios::adjustfield);
//     cout << setprecision(2);
//     cout << fixed;
//     cout << x << endl;
//     return 0;
// }
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float m = +3.11e2;

    cout << left;
    cout << setw(10);
    cout << setfill('*');
    cout << setiosflags(ios::scientific);
    cout << setiosflags(ios::floatfield);
    cout << setiosflags(ios::showpos);
    cout << setprecision(2);
    cout << fixed;
    cout << m << endl;
    return 0;
}