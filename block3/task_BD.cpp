#include <iostream>
using namespace std;

int main(){
    int K, first, second;
    cin >> K;
    first = K * 24;
    second = ((K * 4 + 3) * 3 + 2) * 2 + 1;
    for(; first <= second; ++first){
        cout << first << " ";
    }
}
