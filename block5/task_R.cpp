#include <iostream>
using namespace std;

int main(){
    int n, m;
    bool flag = false, any = false;
    cin >> n >> m;
    for (int i = n; i <= m; ++i){
        for (int j = 2; j * j <= i; ++j){
            if (i % j == 0){
                flag = true;
            }
        }
        if (!flag){
            cout << i << "\n";
            any = true;
        }
        flag = false;
    }
    if (!any)
        cout << "Absent";
}
