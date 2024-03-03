#include<iostream>
using namespace std;
// 1] Stack memory => Static Memory --> can operate directly --> smaller
// 2] Heap memory => Dynamic Memory --> can't operate directly --> larger
/*
int sum(int *arr, int size)
{
    int sum=0;
    for(int i=0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int n;
    cin >> n;
    int *a = new int[n]; // an array is created in Heap but we can not operate or manipulate it directly therefore by this statement we are pointing its address from Heap memory and giving it to the stack memory.
    //  Total memory allocated = Stack memory + Heap memory
    //                         = 8 byte [since its a 'pointer'] + (n*4) bytes [since the data type is 'integer' (4 bytes) & n is the size of thar 'array']
    //                         = 28 bytes (if n=5)
    for(int i=0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << "Sum = " << sum(a,n);
}
*/


/*
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i < n; ++i)
    {
        cin >> arr[i];
    }
    delete []arr; // to delete integer => delete i;
}
*/   


/* // 2D Array ( row = column ) in Dynamic Memory.

int main()
{
    int n;
    cin >> n;

    int** arr = new int* [n];
    for(int i=0; i<n; i++)
    {
        arr[i] = new int[n];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) 
        {
            cin >> arr[i][j];
        }        
    }

     for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) 
        {
            cout << arr[i][j] << " ";
        } 
        cout << endl;       
    }  

    // releasing dynamic memory.
    for(int i=0; i<r; i++)
    {
        delete [] arr[i];
    }

    // releasing static memory.
    delete [] arr;  
}
*/


/* // 2D Array ( row != column ) in Dynamic Memory.

int main()
{
    int r, c;
    cin >> r;
    cin >> c;

    int** arr = new int* [r];
    for(int i=0; i<r; i++)
    {
        arr[i] = new int[c];
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) 
        {
            cin >> arr[i][j];
        }        
    }

     for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++) 
        {
            cout << arr[i][j] << " ";
        } 
        cout << endl;       
    }  

    // releasing dynamic memory.
    for(int i=0; i<r; i++)
    {
        delete [] arr[i];
    }

    // releasing static memory.
    delete [] arr;
}
*/


