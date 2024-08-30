#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, sum_n = 0, n;
    cin >> n;
     for (int i = 0; i < n; ++i){
        cin >> num;
        sum_n += num;
     }
     cout << sum_n;
}
