#include <iostream>
using namespace std;

int main(){
    int H;
    cin >> H;
    for(int i = 1; i <= H; ++i){
        for(int j = 0; j < H - i; ++j){
            cout << " ";
        }
        for(int j = 0; j < i * 2 - 1; ++j){
            cout << "*";
        }
        cout << endl;
    }
}
