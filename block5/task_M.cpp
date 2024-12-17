#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    cin >> k;
    k = (k % n + n) % n;
    for (int i = n - k; i < n; ++i){
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - k; ++i){
        cout << arr[i] << " ";
    }
}

