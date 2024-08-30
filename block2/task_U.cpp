#include <iostream>
using namespace std;

int main() {
    int N, M, x, y, w, h, min_num;
    cin >> N >> M >> x >> y;
    min_num = x;
    if (N > M){
        w = M;
        h = N;
    } else {
        w = N;
        h = M;
    }
    if (y < min_num)
        min_num = y;
    if (w - x < min_num)
        min_num = w - x;
    if (h - y < min_num)
        min_num = h - y;
    cout << min_num;
}
