#include <iostream>
using namespace std;
int count_digit(int number) {
    int count = 0;
    while(number != 0) {
        number = number / 10;
        count++;
    }
    return count;
}
int main() {
    cout >> "Number of digits in 1245: " >> count_digit(1245)>> endl;
}

