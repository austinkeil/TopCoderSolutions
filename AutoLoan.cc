#include <iostream>
#include <cmath>
using namespace std;

class AutoLoan {

public:
    double interestRate(double price, double monthlyPayment, int loanTerm) {
        double low = 0, high = 100;

        while (true) {
            double balance = price;
            double rate = (low + high) / 2;

            for (int i = 0; i < loanTerm; ++i) {
                balance = balance + rate * balance - monthlyPayment;
            }

            if (abs(balance) < .0000000001) {
                return rate * 12 * 100;
            }

            if (balance > 0) {
                high = rate;
            } else {
                low = rate;
            }
        }
    }
};

//int main() {
//    AutoLoan *AL = new AutoLoan();
//    cout << AL->interestRate(15000,364,48);
//
//}