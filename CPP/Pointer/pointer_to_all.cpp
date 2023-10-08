#include <iostream>

using namespace std;

class time
{
private:
    int hour, min;

public:
    void get_data()
    {
        cout << "What's the time dude" << endl;
        cin >> hour >> min;
    }
    void print()
    {
        cout << "It's " << hour << " : " << min << endl;
    }
    void swap()
    {
        int temp = hour;
        hour = hour;
        hour = temp;

        temp = min;
        min = min;
        min = temp;
    }
};

int main()
{
    time t, t2;
    time *pointer_to_obj_t, *pointer_to_obj_t2;
    pointer_to_obj_t = &t, pointer_to_obj_t = &t2;

    void (time::*pointer_function_data)() = &time::get_data;
    void (time::*pointer_function_print)() = &time::print;
    void (time::*pointer_function_swap)() = &time::swap;
    // get data 
    (*pointer_to_obj_t.*pointer_function_data)();
    (*pointer_to_obj_t2.*pointer_function_data)();
    
    // print data
    (*pointer_to_obj_t.*pointer_function_print)();
    (*pointer_to_obj_t2.*pointer_function_print)();
    
    // swap data
    (*pointer_to_obj_t.*pointer_function_swap)();

    //after swap
    cout << "After swap data\n" << endl;
    (*pointer_to_obj_t.*pointer_function_print)();
}