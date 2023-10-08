#include <iostream>
#include <conio.h>

using namespace std;

class time
{
	int hour, min, sec;

public:
	void get();
	void put();
};
void inline time ::get()
{
	cout << "Enter hour minutes and second" << endl;
	cin >> hour >> min >> sec;
}
inline void time ::put()
{
	cout << "Time is " << hour << " : " << min << " : " << sec << endl;
}
int main()
{
	system("COLOR 0B");
	time t;
	t.get();
	t.put();
}
