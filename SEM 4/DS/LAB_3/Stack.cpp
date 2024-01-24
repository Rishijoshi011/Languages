#include <iostream>
// #include <vector>
// #include <limits>

/**
 * ! vector is a part STL library it helps to manage dynamic memory alloction. it has many functions that hleps like resize(which is used below); 
*/

using namespace std;    

class Stack_ {

private:
    int topOfStack, size;
    int *arr;   
    //  vector<int> arr;

public:
    Stack_(int size) : topOfStack(-1), size(size){}
    // Stack_(int size) : topOfStack(-1) { arr.resize(size); }
    ~Stack_() {delete[] arr; }

    void push() {
        if (topOfStack >= size - 1) { cout << "STACK IS OVERFLOW!!" << endl; }
        else {
            topOfStack++;
            cout << "Enter element: ";
            cin >> arr[topOfStack];
            // cout << "Enter element: ";
            // while (!(cin >> arr[topOfStack])) {
            //     cout << "Invalid input. Enter a valid integer: ";
            //     cin.clear();
            //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // }
        }
    }

    void pop() {
        if (topOfStack < 0) { cout << "STACK IS UNDERFLOW!!" << endl; }
        else { topOfStack--; }
    }

    void peek() {
        if (topOfStack == -1) { cout << "STACK IS UNDERFLOW!!" << endl; }
        else { cout << "Top element of the stack: " << arr[topOfStack] << endl; }
    }

    void change() {
        if (topOfStack == -1) { cout << "STACK IS UNDERFLOW!!" << endl; }
        else { 
            cout << "Enter the new value: " << endl;
            cin >> arr[topOfStack];
            cout << "Top element changed" << endl;
        }
    }

    void display() {
        if (topOfStack == -1) { cout << "No Elements present in the stack" << endl; }
        else {
            cout << "Elements in the stack: ";
            for (int i = 0; i <= topOfStack; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "Enter size of stack: ";
    int size;
    cin >> size;
    Stack_ st(size);
    // Stack_ st(size);
    int choice;
    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Change" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: st.push(); break;
        case 2: st.pop(); break;
        case 3: st.display(); break;
        case 4: st.peek(); break;
        case 5: st.change(); break;
        case 6: exit(0); break;
        default: cout << "Enter valid Choice" << endl;
        }
    } while (choice != 6);

    return 0;
}
