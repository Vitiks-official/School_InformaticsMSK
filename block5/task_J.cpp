#include <iostream>
using namespace std;

int main(){
    int n, maxn;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    maxn = arr[0];
    for (int i = 1; i < n; ++i){
        if (arr[i] > maxn){
            maxn = arr[i];
        }
    }
    cout << maxn;
}