#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num == 1)
        cout << "YES";
    else
        if (num % 4 == 0)
            cout << "YES";
        else
            cout << "NO";
}
