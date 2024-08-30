#include <iostream>
using namespace std;

int main() {
    int num, new_num;
    cin >> num;
    new_num = (num % 10) * 10 + num / 10;
    cout << new_num;
}
