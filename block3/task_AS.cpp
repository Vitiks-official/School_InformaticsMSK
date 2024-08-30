#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double a, sum_a = 0;
    cin >> a >> n;
    for (int i = 0; i <= n; ++i){
        sum_a += pow(a, i);
    }
    cout << sum_a;
}
