//Write a C++ program that declares a function prototype for 
//a function named isEven that takes an integer and returns a boolean indicating 
//whether the number is even. Define the function after the main function and call 
//it within main to test with different values.


#include <iostream>

using namespace std;

int isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    int number;
    cin >> number;
    cout << number << (isEven(number) ? " is even." : " is odd.") << endl;
    return 0;
}
