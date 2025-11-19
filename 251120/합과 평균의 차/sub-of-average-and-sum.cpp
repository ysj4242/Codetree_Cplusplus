#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int total = a+b+c;
    int mean = (int)total/3;
    cout << total << endl;
    cout << mean << endl;
    cout << total-mean;
    return 0;
}