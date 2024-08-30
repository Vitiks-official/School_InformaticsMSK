#include <iostream>
#include <cmath>
using namespace std;

int main(){
     int x, count_n = 0;
     cin >> x;
     for (int i = 1; i * i <= x; ++i){
        if (i * i == x)
            ++count_n;
        else if (x % i == 0)
            count_n += 2;
     }
     cout << count_n;
}
