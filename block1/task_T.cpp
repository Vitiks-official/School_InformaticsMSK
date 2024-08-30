#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << num / 60 % 24 << " " << num % 60;
}
