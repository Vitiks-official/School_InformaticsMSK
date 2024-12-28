#include <iostream>
using namespace std;

int main(){
    int start_n, n, k;
    bool flag = true;
    cin >> n;
    start_n = n;
    int arr[n], arr1[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        arr1[i] = arr[i];
    }
    while (flag){
        flag = false;
        for (int i = 0; i < n - 2; ++i){
            if (arr[i] == arr[i + 1] && arr[i + 2] == arr[i + 1]){
                if (i + 2 == n - 1){
                    arr[i] = 10;
                    arr[i + 1] = 10;
                    arr[i + 2] = 10;
                } else {
                    arr[i] = 10;
                    flag = true;
                }
            } else if (flag && arr[i] == arr[i + 1] && arr[i + 1] != arr[i + 2]){
                arr[i - 1] = 10;
                arr[i] = 10;
                arr[i + 1] = 10;
                break;
            }
        }
        k = 0;
        for (int i = 0; i < n; ++i){
            if (arr[i] != 10){
                arr1[k] = arr[i];
                ++k;
            }
        }
        n = k;
        for (int i = 0; i < n; ++i)
            arr[i] = arr1[i];
    }
    cout << start_n - n;
}
