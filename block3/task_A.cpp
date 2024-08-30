#include <iostream>
using namespace std;

int main() {
    int i = 1, n;
    cin >> n;
    while (i * i <= n){
        cout << i * i << endl;
        i++;
    }
}
