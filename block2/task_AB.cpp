#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    if (a > b){
        d = a;
        a = b;
        b = d;
    }
    if (b > c) {
        d = b;
        b = c;
        c = d;
    }
    if (a > b){
        d = a;
        a = b;
        b = d;
    }
    if (a + b > c) {
        if (b + c > a) {
            if (c + a > b) {
                if (a * a + b * b == c * c) {
                    cout << "rectangular";
                } else {
                    if (a * a + b * b < c * c) {
                        cout << "obtuse";
                    } else {
                        cout << "acute";
                    }
                }
            } else {
                cout << "impossible";
            }
        } else {
            cout << "impossible";
        }
    } else {
        cout << "impossible";
    }
}
