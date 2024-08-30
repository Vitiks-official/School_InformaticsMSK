#include <iostream>
using namespace std;

int main(){
    int num, first_n, second_n, answer = -1, answer_n = 0;
    cin >> num;
    for (int i = 1; i < num + 1; ++i){
        cin >> first_n >> second_n;
        if (second_n == 1){
            if (first_n > answer_n){
                answer = i;
                answer_n = first_n;
            }
        }
    }
    cout << answer;
}
