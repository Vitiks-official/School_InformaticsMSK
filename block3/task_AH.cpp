#include <iostream>
using namespace std;

int main(){
    int num, max_n = -1, min_n = 10;
    cin >> num;
    while (num != 0){
        if (num % 10 < min_n)
            min_n = num % 10;
        if (num % 10 > max_n)
            max_n = num % 10;
        num /= 10;
    }
    cout << min_n << " " << max_n;
}
