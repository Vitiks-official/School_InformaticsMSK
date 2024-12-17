#include <iostream>
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i){
        k = 0;
        for (int j = 0; j < n; ++j){
            if (arr[i] == arr[j])
                ++k;
        }
        if (k == 1)
            cout << arr[i] << " ";
    }
}
