#include <iostream>
using namespace std;

int main(){
    int last_num, num, less_c = 1, larg_c = 1, max_row = 1;
    cin >> last_num;
    if (last_num != 0){
        cin >> num;
        while (num != 0){
            if (last_num > num){
                less_c += 1;
                larg_c = 1;
            } else if (last_num < num) {
                less_c = 1;
                larg_c += 1;
            } else {
                less_c = 1;
                larg_c = 1;
            }
            if (less_c > max_row)
                max_row = less_c;
            if (max_row < larg_c)
                max_row = larg_c;
            last_num = num;
            cin >> num;
        }
        cout << max_row;
    } else {
        cout << 0;
    }
}
