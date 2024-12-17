#include <iostream>
using namespace std;

int main(){
    int n, k, ans = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < n; ++i){
        if (arr[i] < k && ans == -1){
            ans = i + 1;
        }
    }
    if (ans == -1){
        cout << n + 1;
    } else {
        cout << ans;
    }
}

