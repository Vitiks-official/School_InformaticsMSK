#include <iostream>
using namespace std;

int main(){
    int num, some_num = 0;
    cin >> num;
    while (num != 0){
        some_num += 1;
        cin >> num;
    }
    cout << some_num;
}
