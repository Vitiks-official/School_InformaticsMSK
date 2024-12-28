#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    bool flag;
    long long arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cin >> m;
    long long arr1[m];
    for (int i = 0; i < m; ++i)
        cin >> arr1[i];
    for (int i = 0; i < n; ++i){
        flag = false;
        for (int j = 0; j < m; ++j){
            if (arr1[j] == arr[i])
                flag = true;
        }
        if (!flag)
            cout << arr[i] << " ";
    }
}
