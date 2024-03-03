// Macro is a piece of code in a program that is replaced by value of macro.

#include<iostream>
using namespace std;

#define PI 3.14
int main()
{
    int r=5;
    double pi = 3.14;
    double area = PI * r * r;
    cout << area;
}