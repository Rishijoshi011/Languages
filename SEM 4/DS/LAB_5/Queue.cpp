#include <iostream>

using namespace std;

class Queue {

private:
    int front, rear, size;
    int *arr;

public:
    Queue(int size) : size(size), front(-1), rear(-1), arr(new int[size]) {}

    ~Queue() { delete[] arr; }
    void queueInsertion() {
        if (rear == size - 1) {
            cout << "QUEUE IS FULL!!" << endl;
            return;
        } 
        if (front == -1){
            front = rear = 0;
            cout << "Enter element: " << endl;
            cin >> arr[rear];
        } else {
            rear++;
            cout << "Enter element: " << endl;
            cin >> arr[rear];
        }
    }

    void queueDelete() {
        if ((front == -1)) {
            cout << "QUEUE IS EMPTY!!" << endl;
            return;
        }
        if (rear == front) {
            int temp = arr[front];
            cout << temp <<  ": is deleted from Queue" << endl;
            front = rear = -1;
        } else {
            int  temp = arr[front];
            cout << temp << " : is deleted from Queue" << endl;
            front++;
        }
    }

    void display() {
    if (front == -1 || front > rear) {
        cout << "QUEUE IS EMPTY!!" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front ; i <= rear ; i++) {
        cout << arr[i] << " " << endl ;
    }
    cout << endl;
}
    void state() {
        cout << "\nfront: " << front << "\nrear: " << rear << endl;
    }
};

int main(){
    cout << "Enter size of queue: " << endl;
    int size;
    cin >> size; 
    Queue que(size);

    int choice;
    do {
        cout << "\n1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: que.queueInsertion(); break;
        case 2: que.queueDelete(); break;
        case 3: que.display(); break;
        case 4: exit(0); break;
        case 404: que.state(); break;
        default: cout << "Enter valid Choice !" << endl;
        }
    } while (choice != 4);
    return 0;
}