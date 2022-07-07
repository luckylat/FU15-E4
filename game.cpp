#include <iostream>
#include <random>

using namespace std;

int main(){
    cout << "Who are you?" << endl;
    cout << "> ";
    string userName;cin>>userName;
    cout << "Hello, " << userName << "!" << endl;

    cout << "Tossing a coin..." << endl;
    int h = 0, t = 0;
    random_device x;
    mt19937 mt(x());
    for(int i = 0; 3 > i; i++){
        cout << "Round " << i+1 << ": ";
        if(mt()%2){
            cout << "Heads";
            h++;
        }else{
            cout << "Tails";
            t++;
        }
        cout << endl;
    }
    cout << "Heads: " << h << ", Tails: " << t << endl;
    if(h>t){
        cout << "You won!" << endl;
    } else {
        cout << "You lost!" << endl;
    }
}
