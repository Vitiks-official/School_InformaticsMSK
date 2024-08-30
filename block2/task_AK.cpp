#include <iostream>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    if (K < 3){
        cout << 0;
    } else {
        if (K == 3){
            if (N == 2){
                cout << 8;
            } else {
                cout << 0;
            }
        } else {
            if (K == 4) {
                switch(N){
                    case 2: cout << 4; break;
                    case 3: cout << 8; break;
                    case 4: cout << 4; break;
                    case 6:
                    case 8:
                    case 5:
                    case 7: cout << 0;
                }
            } else {
                switch(N){
                    case 2: cout << 4; break;
                    case 3: cout << 8; break;
                    case 4: cout << (K - 4) * 4 + 4; break;
                    case 6: cout << (K - 4) * 4; break;
                    case 8: cout << (K - 4) * (K - 4); break;
                    case 5:
                    case 7: cout << 0;
                }
            }
        }
    }
}
