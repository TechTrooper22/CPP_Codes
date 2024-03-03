#include<iostream>
using namespace std;

void update1(int n)
{
    n++; // or n = n += 1.
}

void update2(int& n) // reference variable.
{
    n++;
}

int main()
{
    int n = 7;
    update1(n);
    cout << n << endl; // n=7
    update2(n);
    cout << n << endl; // n=8
}
