#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << num;
    switch (num) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            cout << " korov"; break;
        default:
            switch (num % 10) {
                case 0:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                    cout << " korov"; break;
                case 1:
                    cout << " korova"; break;
                case 2:
                case 3:
                case 4:
                    cout << " korovy"; break;
            }
    }
}
