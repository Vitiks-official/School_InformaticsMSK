#include <iostream>
using namespace std;

int main(){
    int n = 1;
    int nums[9];
    for (int i = 0; i < 9; ++i){
        nums[i] = 0;
    }
    for (int i = 0; n != 0; ++i){
        cin >> n;
        nums[n - 1] += 1;
    }
    for (auto x: nums)
        cout << x << " ";
}
