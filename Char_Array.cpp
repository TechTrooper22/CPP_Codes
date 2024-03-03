#include<iostream>
using namespace std;

int length(char brr[]);
void reverse(char brr[], int size);
int check_palindrome(char brr[], int size);
char lowercase(char x);
char getMax0ccCharacter(string s);

int main()
{
    char arr[20] = {"NOON"};
    cout << endl << "Your name is " << arr << endl;
    
    int l = length(arr);
    cout << "Length of an Array : " << l << endl;

    reverse(arr, l);
    cout << "Reversed array : " << arr << endl;

    if( check_palindrome(arr, l) == 1 )
    {
        cout <<"It is a Palindrome." << endl;
    }
    else
    {
        cout <<"It is not a Palindrome." << endl;
    }

    // arr[2] = '\0';  // inserting null element at 2nd inder.
    // cout << endl << "After insertion : " << arr << endl << endl;
}

int length(char brr[])
{
    int count = 0;
    for( int i=0; brr[i] != '\0'; i++ )
    {
        count++;
    }
    return count;
}

void reverse(char brr[], int size)
{
    int s = 0, e = size-1;
    while(s <= e)
    {
        swap( brr[s++], brr[e--]);
    }
}

int check_palindrome(char brr[], int size)
{
    int s=0, e = size-1;
    while( s <= e)  
    {
        if(brr[s] == brr[e])
        {
            s++;
            e--;
        }
        else 
        { 
            return 0;
        }
    }
    return 1;
}

char lowercase(char x)
{
    if(x >= 'a' && x <= 'z')
    {
        return x;
    }
    else
    {
        x = x - 'A' + 'a';
        return x;
    }
}

char getMax0ccCharacter(string s) 
{
    int arr[26] = {0};
//create an array of count of characters 
for(int i=0; i<s.length(); i++) 
{
    char ch = s[i];
//lowercase
    int number = 0;
    number = ch - 'a';
    arr[number]++;
}

//find maximum occ character 
int maxi = -1, ans = 0; 
for(int i=0; i<26; i++) 
{
    if (maxi << arr[i]) 
    {   
        ans = i;
        maxi = arr[i];
    }
}
char finalAns = 'a'+ ans; 
return finalAns;
}