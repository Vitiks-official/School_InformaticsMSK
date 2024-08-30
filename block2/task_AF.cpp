#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (c < 0){
        cout << "NO SOLUTION";
    } else {
        if (a == 0){
            if (a == c * c - b){
                cout << "MANY SOLUTIONS";
            } else {
                cout << "NO SOLUTION";
            }
        } else {
            if ((c * c - b) % a == 0){
                cout << (c * c - b) / a;
            } else {
                cout << "NO SOLUTION";
            }
        }
    }
}
