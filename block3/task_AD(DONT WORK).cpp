#include <iostream>
using namespace std;

int main(){
    int N, count_n;
    unsigned long long K, new_num = 0, some;
    cin >> K >> N;
    for (int i = 1; i < N; ++i){
        count_n = 1;
        while (K != 0){
            some = K % 10;
            K /= 10;
            if (K == 0 or some != K % 10){
                new_num = new_num * 100 + some * 10 + count_n;
                count_n = 1;
            } else {
                ++count_n;
            }
        }
        K = new_num;
        new_num = 0;
        while (K != 0){
            new_num = new_num * 10 + K % 10;
            K /= 10;
        }
        K = new_num;
        new_num = 0;
    }
    while (K != 0){
        new_num = new_num * 10 + K % 10;
        K /= 10;
    }
    K = new_num;
    new_num = 0;
    while (K != 0){
        cout << K % 10 << " ";
        K /= 10;
    }
}
