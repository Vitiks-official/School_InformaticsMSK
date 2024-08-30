#include <iostream>
using namespace std;

int main(){
    float x, y, num_day = 1;
    cin >> x >> y;
    while (x < y){
        x *= 1.1;
        ++num_day;
    }
    cout << num_day;
}
