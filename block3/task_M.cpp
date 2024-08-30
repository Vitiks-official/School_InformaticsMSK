#include <iostream>
using namespace std;

int main() {
    int n, i = 0, s = 0;
    while (i < 10) {
        cin >> n;
        s += n;
        i++;
    }
    cout << s;
}
