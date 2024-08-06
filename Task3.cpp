// Write a C++ function named greet that takes a string parameter name with a default value of "Guest". The function should print "Hello, [name]!" to the console. Call this function with and without providing an argument.

#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();
    greet("Rabia");
    return 0;
}
