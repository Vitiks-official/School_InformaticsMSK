#include <iostream>
using namespace std;

int main(){
    int n, c, i, cnt = 0;
    int arr[100000];
    for (i = 0; cin >> n; ++i){
        arr[i] = n;
    }
    for (int j = 0; j < i; ++j)
        for (int k = j; k < i; ++k){
            if (k == j){
                --cnt;
            }
            if (arr[j] == arr[k])
                ++cnt;
        }
    cout << cnt;
}
