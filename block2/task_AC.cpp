#include <iostream>
using namespace std;

int main() {
    int A1, B1, C1, A2, B2, C2, some, i = 0;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    if (A1 > B1) {
        some = A1;
        A1 = B1;
        B1 = some;}
    if (B1 > C1) {
        some = B1;
        B1 = C1;
        C1 = some;}
    if (A1 > B1) {
        some = A1;
        A1 = B1;
        B1 = some;}
    if (A2 > B2) {
        some = A2;
        A2 = B2;
        B2 = some;}
    if (B2 > C2) {
        some = B2;
        B2 = C2;
        C2 = some;}
    if (A2 > B2) {
        some = A2;
        A2 = B2;
        B2 = some;}



    if (A1 == A2) {
        if (B1 == B2) {
            if (C1 == C2) {
                i = 1;}}
    }
    if (i == 0) {
        if (A1 <= A2) {
            if (B1 <= B2) {
                if (C1 <= C2) {
                    i = 2;
        }}}
    }
    if (i == 0) {
        if (A1 >= A2) {
            if (B1 >= B2) {
                if (C1 >= C2) {
                    i = 3;
        }}}
    }
    switch (i) {
        case 0:
            cout <<  "Boxes are incomparable";
            break;
        case 1:
            cout << "Boxes are equal";
            break;
        case 2:
            cout << "The first box is smaller than the second one";
            break;
        case 3:
            cout << "The first box is larger than the second one";
            break;
    }
}
