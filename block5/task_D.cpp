#include <iostream>
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i){
        if (arr[i] * arr[i + 1] > 0){
            k = 1;
        }
    }
    if (k == 1){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
