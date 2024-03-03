 #include<iostream>
#include<climits> // for Max & Min.
// you may be required to include the header file <limits.h> or <climits> in your C or C++ source code respectively.
using namespace std;

// arr[n] --> bad practice because it can give runtime error, instead of 'n' give a constant value.

/* // Sum & Product of elements in an array.

int main ()
{
    int n, i, s=0, p=1;
    cout << "Enter the number of Elements : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements : " << endl;
    for ( i=0; i<n; i++ )
    {
        cin >> arr[i];
    }
    for ( i=0; i<n; i++ )
    {
        s = s + arr[i];
        p = p * arr[i];
    }    
        cout << "Sum of Elements is " << s << "." << endl;
        cout << "Product of Elements is " << p << "." << endl;
}

*/


/* // To find Max & Min element in an array.

int Max(int num[], int size) // function to select the max term.
{
    int max = INT_MIN;   
    for ( int i=0; i<size; i++ )
    {
        if ( num[i] > max )
        max = num[i]; 
    }
    return max;

    // INT_MIN is a macro that specifies that an integer variable cannot store any value below this limit. 
    // It represents the minimum value or the upper limit of the integer data type.
    // The value of INT_MIN is:
    // INT_MIN = –2147483648   (for 32-bit Integers)
    // INT_MIN = –9,223,372,036,854,775,808   (for 64-bit Integers)
}

int Min(int num[], int size) // function to select the min term.
{
    int min = INT_MAX;
    for ( int i=0; i<size; i++ )
    {
        if ( num[i] < min )
        min = num[i]; 
    }
    return min;

    // INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit. 
    // It represents the maximum value of the upper limit of the integer data type in C/C++. 
    // The value of INT_MAX is:
    // INT_MAX = 2147483647   (for 32-bit Integers)
    // INT_MAX = 9,223,372,036,854,775,807   (for 64-bit Integers)
}

int main ()
{
    int size;
    cout << "Enter the number of Elements : " << endl;
    cin >> size;
    int num[size];
    cout << "Enter the Elements : " << endl;
    for ( int i=0; i<size; i++ )
    {
        cin >> num[i];
    }
    cout << "Maximum value is " << Max(num, size) << endl;
    cout << "Minimum value is " << Min(num, size) << endl;
}

*/


/* // Linear Search.

bool search( int arr[], int size, int key )
{
for( int i=0; i<size; i++ )
{
    if ( arr[i] == key )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
}

int main()
{
    int arr[11] ={-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5 };
    int key;
    cout << "Enter the element you want to search : " << endl;
    cin >> key;
    bool ans = search( arr, 11, key);
    if( ans == 1)
    {
        cout << "Element is Found." << endl;
    }
    else
    {
        cout << "Element is not Found." << endl;
    }
}

*/


/* // Reverse an Array.

int reverse( int crr[], int size )
{
    int start = 0, end = size-1;
    while( start <= end )
    {
        swap(crr[start], crr[end] );
        start++;
        end--;
    }
    for(int i=0; i<size; i++)
    {
        cout << crr[i] << " ";
    }
}

int main()
{
    int arr[6] = { 1,2,3,4,5,6 };
    int brr[5] = { 1,2,3,4,5 };
    cout << "Even array : " << arr[6] << " " << endl;
    cout << "Reversed even array : " << endl;
    reverse(arr, 6);
    cout << endl << endl;
    cout << "Odd array : " << arr[5] << " " << endl;
    cout << "Reversed odd array : " << endl;
    reverse(brr, 5);
}
*/


/* // Swap Alternate Element.

int SwapAlt(int crr[], int size)
{
    int i;
    for( i=0; i<size; i+=2)  // i+=2 --> i=i+2
    {
        if(i+1 < size)
        {
            swap(crr[i], crr[i+1]);
        }
    }
    for( i=0; i<size; i++ )
    {
        cout << crr[i] << " ";
    }
}

int main()
{
    int arr[6] = { 1,2,3,4,5,6 };
    int brr[5] = { 1,2,3,4,5 };
    cout << "Swapped Array : ";
    SwapAlt(arr, 6);
    cout << endl;
    cout << "Swapped Array : "; 
    SwapAlt(brr, 5);
}
*/


/* // Que.1) You have been given an integer array/list(ARR) of size N. 
   //        Where N is equal to [2M + 1]. Now, in the given array/list, 
   //        'M' numbers are present twice and one number is present only once. 
   //        You need to find and return that number which is unique in the array/list.

main()
{
    int arr[5] = { 1,2,3,2,1 };
    int ans = 0;
    for( int i=0; i<5; i++ )
    {
        ans = ans ^ arr[i]; // ^ --> XOR --> a^a=0 & a^0=a
    }
    cout << "The unique number is " << ans;
}  
*/ 


/* // Que.2) Given an array of integers arr, 
   //        return true if the number of occurrences of each value in the array is unique, 
   //        or false otherwise
   //        NOTE : The no. of occurence of elements must not be same.
*/


/* // Que.3) Find the duplicate element in the array.

main()
{
    int arr[5] = {1,2,3,2,3};
    cout << "Dublicate element : ";
    for( int i=0; i<5; i++ )
    {
        for( int j=i+1; j<5; j++ )
        {
        if( arr[i] == arr[j])
        {
             cout << arr[i] << " ";
        }
        }
    }
}
*/


/* // Que.4*) You are given an array 'ARR' of size 'N' containing each number between 1 and 'N-1' at least once. 
   //         There is a single integer value that is present in the array twice. 
   //         Your task is to find the duplicate integer value present in the array.

main()
{
    int arr[7] = { 1,2,3,4,5,6,5};
    int i, ans=0;
    for( i=0; i<7; i++ )
    {
       ans = ans ^ arr[i];
    }
    for( i=1; i<7; i++ )
    {
       ans = ans ^ i;
    }
     cout << "The dublicate element is " << ans;
}
*/


/* // Que.5) Given an integer array nums of length n where all the integers of nums are in the range [1, n] 
   //        and each integer appears once or twice, return an array of all the integers that appears twice.

main()
{
    int arr[10] = {1,2,4,2,5,7,1,6,5,8};
    int i,j;
    cout << "An array of all the integers that appears twice : ";
    for( i=0; i<10; i++ )
    {
        for( j=i+1; j<10; j++ )
        {
        if( arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
*/


 /* // Que.6*) You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. 
    //        Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
    //        Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

main ()
{
    int arr[7] = { 1,2,3,4,5,6,7 }; // arranged in ascending order.
    int brr[5] = { 2,4,6,8,10 };  // arranged in ascending order.
    int e1, e2, i, j;
    cout << "Common elements in both array : ";
    for( int i=0; i<7; i++ )
    {
        e1 = arr[i];
        for( j=0; j<5; j++ )
        {
            e2 = brr[j];
            if( e1 < e2) // by writing this condition, the time complexity is optimized hence, it will not exceed.
            {
                break;
            }
            if( e1 == e2 )
            {
                cout << e1 << " ";
                e2 = INT_MIN; // e1 has one 2 & e2 have two 2, but e1-2 will form map with the first 2-e2 not with the second 2-e2.
                break;
            }
        }
    } 
}
*/
//                                                       OR

/* // more time is optimized by this code if compare to privious code.
main()  
{
    int i=0, j=0;
    int ans;
    int arr[7] = { 1,2,3,4,5,6,7 }; // arranged in ascending order.
    int brr[5] = { 2,4,6,8,10 };  // arranged in ascending order.
    while( i<7 && j<5 )
    {
        if( arr[i] == brr[j])
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
        else if( arr[i] < brr[j])
        {
          i++;
        }
        else
        {
            j++;
        }
    }
}
*/


/* // Que.7) You are given an integer array 'ARR' of size 'N' and an integer 'S'. 
   //        Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
   //        Note:
   //        1) Each pair should be sorted i.e. the first value should be less than or equals to the second value.
   //        2) Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

main()
{
    int arr[6] = { 1,2,3,4,5,6 }; // the array must be sorted in ascending order.
    int S = 7;
    int i, j;
    for( i=0; i<6; i++ )
    {
        for( j=i+1; j<6; j++ )
        {
            if( arr[i] + arr[j] == S )
            {
                cout << arr[i] << ", " << arr[j] << endl;
                break;
            }
        }
    }
}
*/


/* // Que.8) You are given an array/list ARR consisting of N integers. 
   //        Your task is to find all the distinct triplets present in the array which adds up to a given number Key.
   //        An array is said to have a triplet (ARR[i], ARR[j], ARR[k]) with sum = 'Key' 
   //        if there exists three indices i, j and k such that if( i!=j && j!=k && i!=j && ( arr[i] + arr[j] + arr[k] == K ) )
   
   // NOTE : Here time limit can be excluded. So try to optimize it by using while loop or anything else.
main ()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9 }; // the array must be sorted in ascending order.
    int i, j, k, Key=10;
    for( i=0; i<9; i++ )
    {
        for( j=i+1; j<9; j++ )
        {
            for( k=j+1; k<9; k++)
            {
                if( i!=j && j!=k && i!=j && ( arr[i] + arr[j] + arr[k] == Key ) )
                {
                     cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                     break;
                }
            }
        }
    }
}
*/


/* // Que.9) You have been given an integer array/list (ARR) of size 'N'. It only contains Os, 1s and 2s. 
   //        Write a solution to sort this array/list.

int sort(int brr[], int size)
{
    int i=0, j=size-1;
    while(i<j)
    {
        if( brr[i]==0 )
        {
            i++;
        }
        if( brr[j]==1 )
        {
            j--;
        }
        swap(brr[i], brr[j]);
        i++;
        j--;
        
    }
}

int print( int crr[], int size)
{
    for( int i=0; i<size; i++ )
    {
        cout << crr[i] << " ";
    }
}

int main()
{
    int arr[] = { 1,0,1,1,0,0,1};
    cout << "The sorted array : ";
    sort( arr, 7);
    print( arr, 7);
}
*/


/* // Binary Search.

int bs( int crr[], int size, int key )
{
    int s = 0;
    int e = size - 1;
    int m = (s+e)/2; // if limit of int is exceeding use [ s + (e-s)/2 ].
    while( s <= e )
    {
        if( crr[m] == key )
        { 
            return m;
        }
        else if( crr[m] < key ) // -->
        {
            s = m + 1;
        }
        else
        {
            e = m - 1; // <--
        }
        m = (s+e)/2; 
    }
    return -1;
}

int main()
{
    int arr[] = { 2,4,6,8,10,12,14,16,18,20};
    int brr[] = { 3,5,7,9,11,13,15 };
    int K1 = 21, K2 = 13;
    int a = bs( arr, 10, K1 );
    int b = bs( brr, 7, K2 );
    cout << "The key (K1) is at the index : " << a << endl;;
    cout << "The key (K2) is at the index : " << b;  
}
*/


/* //  Que.1) You have been given a sorted array/list ARR consisting of 'N' elements. 
   //         You are also given an integer 'K'. Now, your task is to find the first and last occurrence of 'K' in ARR.

int first_occurence( int crr[], int size, int key )
{
    int s = 0;
    int e = size - 1;
    int m = (s+e)/2; // if limit of int is exceeding use [ s + (e-s)/2 ].
    int ans = -1;
    while( s <= e )
    {
        if( crr[m] == key )
        { 
            ans = m;
            e = m - 1; // to find the first occurence we are going to look over the left part of the middle.
        }
        else if( crr[m] < key ) // -->
        {
            s = m + 1;
        }
        else
        {
            e = m - 1; // <--
        }
        m = (s+e)/2; 
    }
    return ans;
}

int last_occurence( int crr[], int size, int key )
{
    int s = 0;
    int e = size - 1;
    int m = (s+e)/2; // if limit of int is exceeding use [ s + (e-s)/2 ].
    int ans = -1;
    while( s <= e )
    {
        if( crr[m] == key )
        { 
            ans = m;
            s = m + 1; // to find the last occurence we are going to look over the right part of the middle.
        }
        else if( crr[m] < key ) // -->
        {
            s = m + 1;
        }
        else
        {
            e = m - 1; // <--
        }
        m = (s+e)/2; 
    }
    return ans;
}

int main()
{
    int arr[] = { 2,4,6,8,10,10,10,16,18,20};
    int brr[] = { 3,5,7,11,11,13,15 };
    int frr[] = { 3,5,7 };
    int K1 = 10, K2 = 11, K3 = 1;
    int f1 = first_occurence( arr, 10, K1 );
    int f2 = first_occurence( brr, 7, K2 );
    int f3 = first_occurence( frr, 3, K3 );
    int l1 = last_occurence( arr, 10, K1 );
    int l2 = last_occurence( brr, 7, K2 );
    int l3 = last_occurence( frr, 3, K3 );
    cout << "First occurence of element "<< K1 <<" in array is at the index : " << f1 << endl;
    cout << "Last occurence of element "<< K1 <<" in array is at the index : " << l1 << endl << endl;
    cout << "First occurence of element "<< K2 <<" in array is at the index : " << f2 << endl;
    cout << "last occurence of element "<< K2 <<" in array is at the index : " << l2 << endl << endl;
    cout << "First occurence of element "<< K3 <<" in array is at the index : " << f3 << endl;
    cout << "last occurence of element "<< K3 <<" in array is at the index : " << l3 << endl << endl;
}
*/


/*  // Que.2) You have been given a sorted array/list ARR consisting of 'N' elements. 
    //        You are also given an integer 'K'. Now, your task is to find the first, last & total occurrence  of 'K' in ARR. 

int first_occurence( int crr[], int size, int key )
{
    int s = 0;
    int e = size - 1;
    int m = (s+e)/2; // if limit of int is exceeding use [ s + (e-s)/2 ].
    int ans = -1;
    while( s <= e )
    {
        if( crr[m] == key )
        { 
            ans = m;
            e = m - 1; // to find the first occurence we are going to look over the left part of the middle.
        }
        else if( crr[m] < key ) // -->
        {
            s = m + 1;
        }
        else
        {
            e = m - 1; // <--
        }
        m = (s+e)/2; 
    }
    return ans;
}

int last_occurence( int crr[], int size, int key )
{
    int s = 0;
    int e = size - 1;
    int m = (s+e)/2; // if limit of int is exceeding use [ s + (e-s)/2 ].
    int ans = -1;
    while( s <= e )
    {
        if( crr[m] == key )
        { 
            ans = m;
            s = m + 1; // to find the last occurence we are going to look over the right part of the middle.
        }
        else if( crr[m] < key ) // -->
        {
            s = m + 1;
        }
        else
        {
            e = m - 1; // <--
        }
        m = (s+e)/2; 
    }
    return ans;
}

int total_occurence( int crr[], int size, int key )
{
    if( last_occurence( crr, size, key ) - first_occurence( crr, size, key ) != 0 )
    {
        last_occurence( crr, size, key ) - first_occurence( crr, size, key ) + 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = { 2,4,6,8,10,10,10,16,18,20};
    int brr[] = { 3,5,7,11,11,13,15 };
    int frr[] = { 3,5,7 };
    int K1 = 10, K2 = 11, K3 = 1;

    int f1 = first_occurence( arr, 10, K1 );
    int f2 = first_occurence( brr, 7, K2 );
    int f3 = first_occurence( frr, 3, K3 );
    int l1 = last_occurence( arr, 10, K1 );
    int l2 = last_occurence( brr, 7, K2 );
    int l3 = last_occurence( frr, 3, K3 );
    int t1 = total_occurence( arr, 10, K1 );
    int t2 = total_occurence( brr, 7, K2 );
    int t3 = total_occurence( frr, 3, K3 );

    cout << "First occurence of element "<< K1 <<" in array is at the index : " << f1 << endl;
    cout << "Last occurence of element "<< K1 <<" in array is at the index : " << l1 << endl;
    cout << "Total occurence of element "<< K1 <<" in array : " << t1 << endl << endl;

    cout << "First occurence of element "<< K2 <<" in array is at the index : " << f2 << endl;
    cout << "last occurence of element "<< K2 <<" in array is at the index : " << l2 << endl;
    cout << "Total occurence of element "<< K2 <<" in array : " << t2 << endl << endl;

    cout << "First occurence of element "<< K3 <<" in array is at the index : " << f3 << endl;
    cout << "last occurence of element "<< K3 <<" in array is at the index : " << l3 << endl;
    cout << "Total occurence of element "<< K3 <<" in array : " << t3 << endl << endl;
}
*/


/* // Que.3) Find peak index in a mountain array.

int peak_index( int drr[], int size )
{
    int s = 0, e = size - 1;
    int m = (s + e) / 2;
    while ( s < e )
    {
        if( drr[m] > drr[m+1] )
        {
            e = m;
        }
        else
        {
            s = m + 1;
        }
        m = (s + e) / 2;
    }
    return s;
}

int main()
{
    int arr[] = { 3,4,5,1 };
    int brr[] = { 1,5,4,3,2,1 };
    int crr[] = { 1,2,3,4,3,2,1,0 };

    int pi1 = peak_index( arr, 4 );
    int pi2 = peak_index( brr, 6 );
    int pi3 = peak_index( crr, 8 );

    cout << "Peak index in an array : " << pi1 << endl;
    cout << "Peak index in an array : " << pi2 << endl;
    cout << "Peak index in an array : " << pi3 << endl;
}
*/


/* // Que.4) Find pivot in an array.

int pivot( int drr[], int size )
{
    int s = 0, e = size - 1;
    int m = (s + e) / 2;
    while ( s < e )
    {
        if( drr[0] <= drr[m] )
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = (s + e) / 2;
    }
    return s; // 'return e' can also be used instead of s.
}

int main()
{
    int arr[] = { 7,8,1,2,3 };
    cout << "Pivot is at index : " << pivot( arr, 5);
}
*/


/* // Que.5) Given an non-negative integer X, compute and return the square root of X.

int square_root(int n) // if you want to find the sqrt of bigger num put 'int' --> 'long long int'
{
    int s=0, e=n, m = (s+e)/2; // here s,m & e are not representing index. 
    int ans = -1; 
    while(s<=e)
    {
    int sq = m*m;
     if(sq == n)
     {
        return m;
     }
     else if(sq > n)
     {
        e = m-1;
     }
     else
     {
        s = m+1;
        ans = m;
     }
     m = (s+e)/2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number whose sqrt you want to compute : ";
    cin >> num;
    for(int i=0; i<=num; i++ )
    {
        cout << i << " ";
    }
    cout << endl;
    int sqrt = square_root( num );
    cout << "The sqrt of the " << num << " is found to be " << sqrt;
}
*/


/* // Book Allotation Problem.

// Que.6) Given an array 'arr' of integer numbers. where 'arr[i]' represents the number of pages in the 'ith' book. 
//        There are 'm' number of students and the task is to allocate all the books to their students. Allocate books in such a way that:

//        1. Each student gets at least one book.
//        2. Each book should be allocated to a student.
//        3. Book allocation should be in a contiguous manner.

//        You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.

int min(int page[], int book, int student, int middle)
{
    int page_sum = 0;
    int student_count = 1;
    int i;
    for(i=0; i<book; i++)
    {
        if(page_sum + page[i] <= middle)
        {
            page_sum = page_sum + page[i];
        }
        else
        {
            student_count++;
            if(student_count > student || page[i] > middle)
            {
                return 0;
            }
            page_sum = page[i];
        }
    }    
    return 1;    
}

int main()
{
    int s, n, i;
    cout << "Enter no. of Students : ";
    cin >> s;
    cout << "Enter no. of sets of pages : ";
    cin >> n;
    int arr[n];
    cout << "Enter no. of pages in each set : ";
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered no. of pages in each set : ";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    int start=0, sum=0;
    int ans=-1;
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    int mid = (start + end) / 2;
    while(start <= end)
    {
        if(min(arr, 4, 2, mid) == 1)
        {
            end = mid-1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    int A = ans;
    cout << "The solution is " << A;
}
*/


/* // Bubble Sort (Ascending or Descending order).

main()
{
int arr[] = {1,4,7,0,6,3,5,};
int i, j, n=7;
int key=8;
cout << "Final Sorted Array : ";
for(i=0; i<n; i++)
{
    for(j=i+1; j<n;j++)
    {
        if(arr[i] > arr[j]) // '<' --> Descending order & '>' --> Ascending order.
        {
            swap(arr[i],arr[j]);
        }
    }
    cout << arr[i] << " ";
}
}
*/


// Selection Sort.


// Insertion Sort.


//