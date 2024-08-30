#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    switch (num){
        case 1:
        case 2:
        case 4:
        case 7: cout << "IMPOSSIBLE"; break;
        default:
            if (num % 3 == 0){
                cout << num / 3 << " " << 0;
            } else {
                switch (num % 5){
                    case 0:
                        cout << 0 << " " << num / 5; break;
                    case 1:
                        cout << 2 << " " << (num - 6) / 5; break;
                    case 2:
                        cout << 4 << " " << (num - 12) / 5; break;
                    case 3:
                        cout << 1 << " " << (num - 3) / 5; break;
                    case 4:
                        cout << 3 << " " << (num - 9) / 5; break;
                }
            }
    }
}
