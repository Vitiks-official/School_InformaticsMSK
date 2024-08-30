#include <iostream>
using namespace std;

int main(){
    int num, some_num = 0;
    cin >> num;
    while (num != 0){
        some_num += num;
        cin >> num;
    }
    cout << some_num;
}
