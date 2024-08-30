#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int first, second, n;
    cin >> first >> second >> n;
    cout << first << " " << second << " ";
    for (int i = 2; i < n; ++i){
        cout << second + (second - first) * (i - 1) << " ";
    }
}
