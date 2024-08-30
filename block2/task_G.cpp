#include <iostream>
using namespace std;

int main() {
    int year, flag;
    cin >> year;
    flag = 0;
    if (year % 4 == 0)
        flag = 1;
    if (year % 100 == 0)
        flag = 0;
    if (year % 400 == 0)
        flag = 1;
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
}
