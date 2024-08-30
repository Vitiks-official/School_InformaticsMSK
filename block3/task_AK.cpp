#include <iostream>
using namespace std;

int main(){
    int sec, num = 1;
    cin >> sec;
    while (sec != 0){
        if (sec < num){
            for (int i = 0; i < sec; ++i){
                cout << num << " ";
            }
            sec = 0;
        } else {
            for (int i = 0; i < num; ++i){
                cout << num << " ";
            }
            sec -= num;
            ++num;
        }
    }
}
