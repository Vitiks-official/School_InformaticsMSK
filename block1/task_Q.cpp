#include <iostream>
using namespace std;

int main() {
    int num, e, d, s, t, new_num;
    cin >> num;
    t = num / 1000;
    s = num / 100 % 10;
    d = num / 10 % 10;
    e = num % 10;
    new_num = e * 1000 + d * 100 + s * 10 + t;
    cout << num - new_num + 1;
}
