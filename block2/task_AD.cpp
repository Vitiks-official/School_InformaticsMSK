#include <iostream>
using namespace std;

int main(){
    int a1, b1, c1, a2, b2, c2, answer;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    answer = (c1 / c2) * (b1 / b2) * (a1 / a2);
    if ((a1 / a2) * (b1 / c2) *(c1 / b2) > answer){
        answer = (a1 / a2) * (b1 / c2) *(c1 / b2);
    }
    if ((a1 / b2) * (b1 / a2) *(c1 / c2) > answer){
        answer = (a1 / b2) * (b1 / a2) *(c1 / c2);
    }
    if ((a1 / b2) * (b1 / c2) *(c1 / a2) > answer){
        answer = (a1 / b2) * (b1 / c2) *(c1 / a2);
    }
    if ((a1 / c2) * (b1 / a2) *(c1 / b2) > answer){
        answer = (a1 / c2) * (b1 / a2) *(c1 / b2);
    }
    if ((a1 / c2) * (b1 / b2) *(c1 / a2) > answer){
        answer = (a1 / c2) * (b1 / b2) *(c1 / a2);
    }
    cout << answer;
}
