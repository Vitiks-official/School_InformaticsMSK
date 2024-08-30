#include <iostream>
using namespace std;

int main(){
    int num, last_num, t_num, count_n = 0;
    cin >> last_num;
    cin >> num;
    if (num != 0){
        cin >> t_num;
        while (t_num != 0){
            if (num > last_num and num > t_num){
                count_n += 1;
            }
            last_num = num;
            num = t_num;
            cin >> t_num;
        }
    }
    cout << count_n;
}
