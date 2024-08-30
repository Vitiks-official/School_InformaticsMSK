#include <iostream>
using namespace std;

int main() {
    int k, hours, mins;
    cin >> k;
    hours = k / 3600;
    mins = k % 3600 / 60;
    cout << "It is " << hours << " hours " << mins << " minutes.";
}
