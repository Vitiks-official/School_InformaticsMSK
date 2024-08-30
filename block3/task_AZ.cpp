#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, num, long_between = 100, min_long;
    cin >> n;
    min_long = long_between;
    for (int i = 0; i < n; ++i){
        cin >> num;
        long_between += num;
        long_between = abs(long_between);
        if (long_between < min_long)
            min_long = long_between;
    }
    cout << min_long;
}
