#include <iostream>
using namespace std;

int main() {
    int x, y, z, some;
    cin >> x >> y >> z;
    if (x > y){
        some = y;
        y = x;
        x = some;
    }
    if (y > z){
        some = z;
        z = y;
        y = some;
    }
    if (x > y){
        some = y;
        y = x;
        x = some;
    }
    if ((x + y + z) % 2 == 0){
        if (x + 1 == y and y + 1 == z){
            cout << "YES";
        } else {
            if (y == z){
                if (x == y){
                    if (z % 2 == 0){
                        cout << "YES";
                    } else {
                        cout << "NO";
                    }
                } else {
                    if (x + 1 == y){
                        cout << "YES";
                    } else {
                        cout << "NO";
                    }
                }
            } else {
                if (x == y){
                    if (x + y == z or x + y == z + 2){
                        cout << "YES";
                    } else {
                        cout << "NO";
                    }
                } else {
                    if (x + y >= z){
                        cout << "YES";
                    } else {
                        cout << "NO";
                    }
                }
            }
        }
    } else {
        cout << "NO";
    }
}
