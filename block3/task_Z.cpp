#include <iostream>
using namespace std;

int main(){
    int num, i = 2, count_i, flag = 0;
    cin >> num;
    while (num != 1){
        count_i = 0;
        while (num % i != 0){
            ++i;
        }
        num /= i;
        count_i += 1;
        if (num % i == 0){
            while (num % i == 0){
                num /= i;
                count_i += 1;
            }
        }
        if (flag)
            cout << "*";
        else
            flag = 1;
        if (count_i > 1)
            cout << i << "^" << count_i;
        else
            cout << i;
        i = 2;
    }
}
