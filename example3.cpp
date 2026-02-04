#include <iostream>

using namespace std;

double power(double n, k) {
    double k_minus_1 = power(n, k - 1);
    return n * k_minus_1;
}

int main() {
    cout << power(2.0, 8) << endl;
    return 0;
}
