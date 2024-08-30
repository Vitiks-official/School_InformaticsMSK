#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, high, crash = 0;
    cin >> num;
    for (int i = 0; i < num; ++i){
        cin >> high;
        if (437 >= high and crash == 0)
            crash = i + 1;
    }
    if (crash == 0)
        cout << "No crash";
    else
        cout << "Crash " << crash;
}
