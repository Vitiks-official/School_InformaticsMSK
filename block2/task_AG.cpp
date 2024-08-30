#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0){
        if (b == 0){
            cout << "INF";
        } else {
            cout << "NO";
        }
    } else {
        if (b % a == 0){
            if (c * (-b / a) + d == 0){
                cout << "NO";
            } else {
                cout << -b / a;
            }
        } else {
            cout << "NO";
        }
    }
}
