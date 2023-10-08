#include <iostream>

using namespace std;

class Election{
    int count[5];
    int spoiledBallouts;

    public:
        Election() : spoiledBallouts(0) {}

        void set(){
            cout << "Enter your votes here!" << endl;
            for (int i = 0; i < 5; i++){
                cin >> count[i];  
            }
        }

        void checkingTheVotes(){
            for (int i = 0; i < 5; i++){
                if(count[i] < 1 || count[i] > 5){
                    spoiledBallouts++;
                }
            }
        }

        void result(){
            for (int i = 0; i < 5; i++){
                if(count[i] < 1 || count[i] > 5){
                    cout << "spoiled Ballout!!: " << count[i]<< endl;
                } else {
                    cout << "Valid votes" << count[i] << endl;
                }
            }
            cout << "Total no of spoiled Ballout is: " << spoiledBallouts << endl;
        }
};

int main(){
    Election el;

    el.set();
    el.checkingTheVotes();
    el.result();
}