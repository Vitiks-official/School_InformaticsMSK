#include <iostream>
using namespace std;

int main(){
    int num, big_num = 0, second_big_num = 0;
    cin >> num;
    while (num != 0){
        if (num > big_num){
            second_big_num = big_num;
            big_num = num;
        } else {
            if (num > second_big_num){
                second_big_num = num;
            }
        }
        cin >> num;
    }
    cout << second_big_num;
}
