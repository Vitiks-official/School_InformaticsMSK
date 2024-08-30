#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, num, otr = 0, pol = 0, nol = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> num;
        if (num == 0)
            ++nol;
        else if (num > 0)
            ++pol;
        else
            ++otr;
    }
    cout << nol << " " << pol << " " << otr;
}
