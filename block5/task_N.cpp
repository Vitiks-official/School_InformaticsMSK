#include <iostream>
using namespace std;

int main(){
    int n, maxn, minn;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    maxn = arr[0];
    minn = arr[0];
    for (int i = 1; i < n; ++i){
        if (arr[i] > maxn){
            maxn = arr[i];
        }
        if (arr[i] < minn){
            minn = arr[i];
        }
    }
    for (int i = 0; i < n; ++i){
        if (arr[i] == minn){
            arr[i] = maxn;
        } else if (arr[i] == maxn){
            arr[i] = minn;
        }
    }
    for (auto x: arr){
        cout << x << " ";
    }
}

