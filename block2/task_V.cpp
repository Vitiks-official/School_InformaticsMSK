#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, answer;
    cin >> num >> answer;
    if (answer == 1) {
        if (num == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        if (num != 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}
