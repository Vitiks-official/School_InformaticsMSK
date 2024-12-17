#include <iostream>
using namespace std;

int main(){
    int n, n1 = 0;
    bool flag;
    cin >> n;
    int arr[n], arr1[n];
    for (int i = 0; i < n; ++i){
        flag = true;
        cin >> arr[i];
        for (int j = 0; j <= n1; ++j){
            if (arr[i] == arr1[j])
                flag = false;
        }
        if (flag){
            arr1[n1] = arr[i];
            ++n1;
        }
    }
    cout << n1;
}
