#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

double computeCompoundInterest(double principal, double rate, int periods) {
    double effectiveRate = rate / 100; // Convert percentage to decimal
    double compoundInterest = principal * (pow(1 + effectiveRate, periods) - 1);
    return compoundInterest;
}

int main() {
    double principal = 1000.0;
    double rate = 5.0; // Annual interest rate in percentage
    int periods = 3; // Number of periods

    double compoundInterest = computeCompoundInterest(principal, rate, periods);

    cout << "Principal: $" << principal << endl;
    cout << "Annual interest rate: " << rate << "%" << endl;
    cout << "Number of periods: " << periods << endl;
    cout << "Compound interest: $" << compoundInterest << endl;

    return 0;
}
