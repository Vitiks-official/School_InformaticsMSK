#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    switch (num) {
        case 1:
        case 2:
        case 4:
        case 7:
            cout << "NO"; break;
        default:
            cout << "YES";
    }
}
