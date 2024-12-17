#include <iostream>
using namespace std;

int main(){
    int n, A, B, C, D, k = 0;
    cin >> n >> A >> B >> C >> D;
    int arr[n], arr1[n], arr2[n];
    for (int i = 0; i < n; ++i){
        arr[i] = i + 1;
    }
    for (int i = 0; i < A - 1; ++i){
        arr1[k] = arr[i];
        ++k;
    }
    for (int i = B - 1; i >= A - 1; --i){
        arr1[k] = arr[i];
        ++k;
    }
    for (int i = B; i < n; ++i){
        arr1[k] = arr[i];
        ++k;
    }
    k = 0;
    for (int i = 0; i < C - 1; ++i){
        arr2[k] = arr1[i];
        ++k;
    }
    for (int i = D - 1; i >= C - 1; --i){
        arr2[k] = arr1[i];
        ++k;
    }
    for (int i = D; i < n; ++i){
        arr2[k] = arr1[i];
        ++k;
    }
    for (auto x: arr2)
        cout << x << " ";

}



