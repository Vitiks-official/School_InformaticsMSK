#include <iostream>
using namespace std;

int main() {
    int i, n;
    cin >> i >> n;
    while (i <= n){
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    }
}
