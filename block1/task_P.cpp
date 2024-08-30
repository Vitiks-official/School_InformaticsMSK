#include <iostream>
using namespace std;

int main() {
    int class1, class2, class3, count_table;
    cin >> class1 >> class2 >> class3;
    count_table = (class1 + 1) / 2 + (class2 + 1) / 2 + (class3 + 1) / 2;
    cout << count_table;
}
