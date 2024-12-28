#include <iostream>
using namespace std;

int main(){
    int n, maxn, k = 0, c = 0;
    int arr[10001];
    cin >> n;
    maxn = n;
    while (n != 0){
        arr[k] = n;
        if (arr[k] > maxn)
            maxn = arr[k];
        ++k;
        cin >> n;
    }
    for (int i = 0; i < k; ++i)
        if (maxn == arr[i])
            ++c;
    cout << c;
}
