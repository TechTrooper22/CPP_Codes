// A function default value is a value that can be used for a parameter if the calling statement does not pass an argument. 
// If an argument is provided, the default value is ignored.

#include<iostream>
using namespace std;

int print(int a[], int size, int start=2) // Here by default we assigned a value to 'start', if the user does not assigned any value to 'start' then it will be taken as its default assigned value.
{                                         // We directly can not  assigned value to 'size' or 'a', because it follows "right to left" i.e. first we have to assigned 'start' then 'size' then 'a'.
    for(int i = start; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n=5;
    int arr[n] = {1,2,3,4,5};
    
    print(arr, n, 1);
    cout << endl;
    print(arr, n); // Here, user does not provide any value to 'start' hence it will go through 'default'.
}