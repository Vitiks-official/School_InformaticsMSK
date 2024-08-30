#include <iostream>
using namespace std;

int main(){
    int num, new_num = 0, some, step = 1;
    cin >> num;
    while (num != 0){
        some = num % 10;
        num /= 10;
        new_num += step * some;
        step *= 2;
    }
    cout << new_num;
}
