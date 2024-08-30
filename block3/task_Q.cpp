#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while (num != 1){
        cout << num % 2;
        num /= 2;
    }
    cout << 1;
}
