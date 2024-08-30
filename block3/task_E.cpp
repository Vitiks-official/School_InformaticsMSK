#include <iostream>
using namespace std;

int main() {
    int i = 1, n, s = 0;
    cin >> n;
    while (i <= n){
        s += i * i;
        i++;
    }
    cout << s;
}
