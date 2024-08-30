#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, coin, one = 0, zero = 0;
    cin >> num;
    for (int i = 0; i < num; ++i){
        cin >> coin;
        if (coin)
            ++one;
        else
            ++zero;
    }
    if (zero < one)
        cout << zero;
    else
        cout << one;
}
