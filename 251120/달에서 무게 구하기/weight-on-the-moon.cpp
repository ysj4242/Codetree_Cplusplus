#include <iostream>
using namespace std;

int main() {
    int chu = 13;
    float moon = 0.165000;
    cout << fixed;
    cout.precision(6);
    cout << chu << " " << "*" << " " << moon << " " << "=" << " " << chu*moon ;
    return 0;
}