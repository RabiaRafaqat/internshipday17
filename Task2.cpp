// Write a C++ function named add that takes two integers as parameters and returns their sum. Call this function from the main function and print the result.

#include<iostream>
using namespace std;
void add(int a , int b ){
    cout<<"sum of 2 numbers is:"<<endl;
    cout<<a+b<<endl;
}
int main(){
    add(4,2);
    return 0;
}