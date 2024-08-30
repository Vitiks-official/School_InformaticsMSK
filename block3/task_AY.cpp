#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, sum_N = 0;
    cin >> N;
    for (int i = 0; i <= N; ++i){
        sum_N += pow(2, i);
    }
    cout << sum_N;
}
