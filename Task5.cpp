//: Write a C++ function named factorial that takes an integer n and returns its factorial. Call this function from the main function and print the result for n = 5.


#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n = 5;
    int result = factorial(n);
    cout << "The factorial of " << n << " is: " << result << endl;
    return 0;
}
