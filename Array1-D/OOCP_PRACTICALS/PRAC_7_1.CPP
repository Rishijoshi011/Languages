#include <iostream>
#include <string>

using namespace std;

class Publisher
{
    string title;

    public:
        void set(string title){
            this->title = title;
        }

        string get(){
            return title;
        }
};

class Book : public Publisher
{
    int pageNo;

    public:
        void set(int pageNo){
            this->pageNo = pageNo;
        }

        int get(){
            return pageNo;
        }
};

class Tape : public Publisher
{
    int time;

    public:
        void set(int time){
            this->time = time;
        }

        int get(){
            return time;
        }
};

int main(){

    Publisher p;
    Book b;
    Tape t;

    p.set("Inheritance");
    b.set(59);
    t.set(25);

    cout << "Title: " << p.get() << endl;
    cout << "Page No: " << b.get() << endl;
    cout << "Duration: " << t.get() << " min" << endl;

    return 0;
}