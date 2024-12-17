#include <iostream>
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for (int i = 1; i < n; i += 2){
        cout << arr[i] << " " << arr[i - 1] << " ";
    }
    if (n % 2 == 1){
        cout << arr[n - 1];
    }
}
