#include <iostream>
using namespace std;

int main(){
    int x, y, count_year = 0;
    float p;
    cin >> x >> p >> y;
    x *= 100;
    y *= 100;
    while (x < y){
        x = x * (1 + p / 100);
        x /= 1;
        ++count_year;
    }
    cout << count_year;
}
