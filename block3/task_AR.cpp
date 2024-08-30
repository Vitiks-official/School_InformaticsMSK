#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    for (int i = 1; num * num >= i; i += num + 1){
        cout << i << " ";
    }
}
