#include <iostream>
using namespace std;

int main(){
    int num, sum_n = 0;
    cin >> num;
    while (num != 0){
        sum_n += num % 10;
        num /= 10;
    }
    cout << sum_n;
}
