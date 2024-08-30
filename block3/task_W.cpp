#include <iostream>
using namespace std;

int main(){
    int num, last_num, some_num = 0;
    cin >> num;
    last_num = num;
    while (num != 0){
        if (last_num < num){
            some_num += 1;
        }
        last_num = num;
        cin >> num;
    }
    cout << some_num;
}
