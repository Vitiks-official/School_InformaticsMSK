#include <iostream>
using namespace std;

int main(){
    int num, a = 0, some, count_nums = 0;
    cin >> num;
    for(int i = 1; i <= num; ++i){
        some = i;
        while (some != 0){
            a = a * 10 + some % 10;
            some /= 10;
        }
        if (a == i){
            count_nums += 1;
        }
        a = 0;
    }
    cout << count_nums;
}
