#include <iostream>
#include <cmath>
using namespace std;

class SortEstimate {

public:
    double howMany(int c, int time) {
        double low = 0, high = time / double(c);

        while (true) {
            double n = (low + high) / 2;

            double result = c * n * log2(n);
            if (result <= time && abs(result-time) < .0000000001) {
                return n;
            }

            if (result < time) {
                low = n;
            } else {
                high = n;
            }
        }
    }

};

//int main() {
//    SortEstimate *SA = new SortEstimate();
//    cout << SA->howMany(1, 2000000000) << endl;
//}