#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b + c) {
        if (b < a + c){
            if (c < a + b){
                cout << "YES";
            } else {
                cout << "NO";
            }
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }
}
