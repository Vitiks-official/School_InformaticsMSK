#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int max_num = num;
    while (num != 0){
        if (max_num < num){
            max_num = num;
        }
        cin >> num;
    }
    cout << max_num;
}
