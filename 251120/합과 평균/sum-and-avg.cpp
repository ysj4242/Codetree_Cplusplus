#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A;
    cin >> B;
    int total = A + B;
    double mean = (double)total/2;
    cout << total << " ";
    cout << fixed;
    cout.precision(1);
    cout << mean;
    return 0;
}