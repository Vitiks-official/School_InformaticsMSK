#include <iostream>
using namespace std;

int main(){
    int num, count_0 = 0;
    cin >> num;
    while (num != 0){
        if (num % 10 == 0)
            count_0 += 1;
        num /= 10;
    }
    cout << count_0;
}
