#include <iostream>

using namespace std;

class CircularQueue {

private:

    int front, rear, size;
    int *arr;

public:
    CircularQueue(int size) : size(size), front(-1), rear(-1), arr(new int[size]) {}

    void queueInsertion() {
        if ( (front == rear + 1) || ((rear == size - 1) && (front == 0))){
            cout << "QUEUE IS FULL!!" << endl;
            return;
        } else if (front == -1){
            cout << "Enter the Element : " << endl ;
            front = rear = 0;
            cin >> arr[rear];
        } else if (rear == size - 1) {
            rear = 0;
            cout << "Enter the Element : " << endl ;
            cin >> arr[rear];
        } else {
            cout << "Enter the Element : " << endl ;
            rear++;
            cin >> arr[rear];
        }
    }

    void queueDelete() {
       if(rear == -1){
            cout << "QUEUE IS EMPTY!!" << endl;
            return;
       } else if (rear == front){
            int temp = arr[front];
            cout << temp << ": is deleted from Queue" << endl;
            rear = front = -1;
       } 
       else if (front == size - 1) {
            int temp = arr[front];
            cout << temp << ": is deleted from Queue" << endl;
            front = 0;
       } else {
            int temp = arr[front];
            cout << temp << ": is deleted from Queue" << endl;
            front++;
       }
    }

    void display() {
        if (rear == -1) {
            cout << "QUEUE IS EMPTY!!" << endl;
            return;
        } 
        cout << "Queue elements: ";
        if(front > rear) {
            for (int i = front; i <= size - 1; i++){
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; i++){
                cout << arr[i] << " ";
            }
        }
        else {
            for (int i = front; i <= rear; i++){
                cout << arr[i] << " ";
            }
        }
    }

    void state() {
        cout << "\nfront: " << front << "\nrear: " << rear << endl;
    }
};

int main(){
    cout << "Enter size of queue: " << endl;
    int size;
    cin >> size; 
    CircularQueue que(size);

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