#include <iostream>
using namespace std;

int main(){
    int x, d, count_d = 0;
    cin >> x >> d;
    while (x != 0){
        if (x % 10 == d){
            ++count_d;
        }
        x /= 10;
    }
    cout << count_d;
}
