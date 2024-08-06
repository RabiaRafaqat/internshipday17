//Write a C++ function named findMax that 
//takes three integers as parameters and returns the largest of the three. Call this 
//function from the main function and print the result.

#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x = 5, y = 10, z = 7;
    cout << "The largest number is " << findMax(x, y, z) << endl;
    return 0;
}
