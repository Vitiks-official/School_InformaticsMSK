#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, sum_n = 0;
     for (int i = 0; i < 100; ++i){
        cin >> num;
        sum_n += num;
     }
     cout << sum_n;
}
