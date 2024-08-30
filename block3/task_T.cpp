#include <iostream>
using namespace std;

int main(){
    int num;
    double sum_num = 0, some_num = 0;
    cin >> num;
    while (num != 0){
        sum_num += num;
        some_num += 1;
        cin >> num;
    }
    cout << sum_num / some_num;
}
