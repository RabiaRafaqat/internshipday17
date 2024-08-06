// Write two C++ functions named multiply – one that takes two integers and another that takes two doubles. Both functions should return the product of the two numbers. Call both functions from the main function and print the results.

#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    int intResult;
    double doubleResult;

    intResult = multiply(67, 88);
    cout << "The product of 9 and 7 (int) is: " << intResult << endl;

    doubleResult = multiply(4.9, 7.7);
    cout << "The product of 5.6 and 8.7 (double) is: " << doubleResult << endl;

    return 0;
}
