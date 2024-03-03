#include<iostream>
using namespace std;

/* // Finding factorial of a given number.

 int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
        return a * fact(a-1);
    }
}

int main()
{
    int n, ans;
    cout << "Enter the number : ";
    cin >> n;
    ans = fact(n);
    cout << ans;
}
*/


/* // Power.

int pow(int a, int i)
{
    if(a==0)
    {
        return 0;
    }
    else if(i==0)
    {
        return 1;
    }
    else if(i==1)
    {
        return a;
    }
    else
    {
        return a * pow(a, i-1);
    }

}

int main()
{
    int n, p, ans;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the power : ";
    cin >> p;
    ans = pow(n, p);
    cout << "Answer : " << ans;
}
*/


/* // Fibonacci Series.

int fib(int a)
{
    if(a==0)
    {
        return 0;
    }
    if(a==1)
    {
        return 1;
    }
    else
    { 
        return fib(a-1) + fib(a-2);
    }
}


int main()
{
    int n, ans;
    cout << "Enter the nth place :";
    cin >> n;
    cout << "Fibonacci Series : ";
    for(int i=0; i<n; i++)
    {
        cout << fib(i) << " ";
    }
    
}
*/


/* // Say Digits.

void  SayDigits(string a[], int n)
{
    if(n==0)
    {
        return;
    }
    // if n = 123
    int digit = n % 10;
    n = n / 10;
    // cout << a[digit] << " "; // Result => three two one
    SayDigits(a, n);
    cout << a[digit] << " "; // Result => one two three
}

int main()
{
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << " Say Digits =>" << endl;      
    SayDigits(arr, num);     
}
*/


/* // Check array is sorted or not.

bool sort(int a[], int size)
{
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(a[0] > a[1])
    {
        return false;
    }
    else
    {
        bool next_part = sort(a+1, size-1);
        return next_part;
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    bool ans = sort(arr, 6);
    if(ans)
    {
        cout << "Array is Sorted.";
    }
    else
    {
        cout << "Array is not Sorted.";
    }
}
*/


/* // Sum of elements in an Array.

int getSum(int a[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return a[0];
    }
    else
    {
        int sum = getSum(a+1, size-1);
        return a[0] + sum;
    }
    
}
    

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int ans = getSum(arr, 6);
    cout << "Sum => " << ans;
}
*/


/* // Linear Search.

bool search(int a[], int size, int K)
{
    if(size == 0)
    {
        return false;
    }
    if(a[0] == K)
    {
        return true;
    }
    else
    {
        bool next_part = search(a+1, size-1, K);
        return  next_part;
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int key = 7;
    bool ans = search(arr, 6, key);
    if(ans)
    {
        cout << "Element found.";
    }
    else
    {
        cout << "Element does not found.";
    }
}
*/


/* // Binary Search.

// void print(int b[], int start, int end)
// {
//     for(int  i = start; i <= end; i++)
//     {
//         cout << b[i] << " ";
//     }
// }

bool binarysearch(int a[], int s, int e, int K) // no need to mention the size because the size get divided.
{
    // cout << endl;
    // print(a, s, e); // to print the processing array.
    // cout << endl;

    int m;
    m = s + (e-s)/2;
    if(s>e)
    {
        return false;
    }
    if(a[m]==K)
    {
        return true;
    }
    if(a[m] < K)
    {
        return binarysearch(a, m+1, e, K); // s = m+1
    }
    else
    {
        return binarysearch(a, s, m-1, K); // e = m-1
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int key = 2;
    bool ans = binarysearch(arr, 0, 5, key);
    if(ans)
    {
        cout << endl;
        cout << "Element found.";
    }
    else
    {
        cout << endl;
        cout << "Element does not found.";
    }
}
*/


/* // Reverse a String.

void revString(string& name, int s, int e) // Refference variableclear
{
    if(s>e)
    {
        return;
    }
    swap(name[s], name[e]);
    s++;
    e--;
    
    revString(name, s, e);
}

int main()
{
    string name = "TEJAS";
    cout << "Reversed String => ";
    revString(name, 0, name.size()-1);
    cout << name;
}
*/

/* // Paalindome or not.

bool checkPalindrome(string str, int s, int e)
{
    if(s>e)
    {
        return true;
    }
    if(str[s] != str[e])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, s+1, e-1);
    }
}

int main()
{
    string word = "abbccbba";
    if(checkPalindrome(word, 0, word.size()-1))
    {
        cout << "Its a Palindrme.";
    }
    else
    {
        cout << "Its not a Palindrme.";
    }
}
*/


/* // Power 2.O (optimized way).

int pow(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    if(p==1)
    {
        return n;
    }
    int pro = pow(n, p/2); // watch 'Lecture 34' for the explanation of 'p/2'
    if(p%2 != 0) // odd condition
    {
        return (n * pro * pro);
    }
    else
    {
        return (pro * pro);
    }
}

int main()
{
    int a, b;
    cout << "Enter 'a' & 'b' ";
    cin >> a >> b;
    int ans = pow(a, b);
    cout << "Solution => " << ans;
}
*/ 


/* // Bubble Sort.

 void print(int a[], int size)
 {
    for(int i=0; i<size; i++)
    {
        cout << a[i] << " ";
    }
 }

void bubbleSort(int a[], int size)
{
    cout << endl;
    print(a, size);
    cout << endl;
    
    if(size == 0 || size == 1)
    {
        return;
    }
    for(int i=0; i < size-1; i++)
    {
        if(a[i] > a[i+1])
        {
            swap(a[i], a[i+1]);
        }
    }
    bubbleSort(a, size-1);
}

int main()
{
    int arr[10] = {4,6,3,7,1,9,2,0,5,8};
    bubbleSort(arr, 10);
    cout << "Sorted Array : ";
    for(int i=0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
*/


// Watch lecture 35, 36 & 39 for 'Merge sort', 'Quick sort' & 'Permutation of a String'  resp.


/* // Subets.

// Que.) Given an integer array nums of unique elements, return all possible subsets (the power set).
//       The solution set must not contain duplicate subsets. Return the solution in any order

#include<vector>

void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& subsets) 
{
    if (index >= nums.size()) 
    {
        subsets.push_back(current);
        return;
    }

    // Exclude the current element
    generateSubsets(index + 1, nums, current, subsets);

    // Include the current element
    current.push_back(nums[index]);
    generateSubsets(index + 1, nums, current, subsets);

    // Backtrack
    current.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<vector<int>> subsets;
    vector<int> current;
    generateSubsets(0, nums, current, subsets);
    return subsets;
}

int main() 
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    for (const vector<int>& subset : result) 
    {
        cout << "[";
        for (int num : subset) 
        {
            cout << " " << num << " ";
        }
        cout << "]" << ", ";
    }

    return 0;
}
*/


/* // Subsequence.

// Que.) You are given a string 'STR' containing lowercase English letters from a to z inclusive. 
//       Your task is to find all non-empty possible subsequences of 'STR'.

#include<string>

void findSubsequences(string str, string current, int index) 
{
    if (index == str.length()) 
    {
        if (!current.empty()) 
        {
            cout << current << " ";
        }
        return;
    }

    // Include the current character
    findSubsequences(str, current + str[index], index + 1);

    // Exclude the current character
    findSubsequences(str, current, index + 1);
}

int main() 
{
    string str = "abc";
    findSubsequences(str, "", 0);
    return 0;
}
*/


/* // Letter Combination of a Phone Number

// Que.) Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. 
//       Return the answer in any order. A mapping of digit to letters (just like on the telephone buttons) is given below. 
//       Note that 1 does not map to any letters.

#include <vector>
#include <string>

// Define the mapping of digits to letters
const vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// Function to generate letter combinations recursively
void generateCombinations(vector<string>& result, const string& digits, string current, int index) 
{
    if (index == digits.size()) 
    {
        result.push_back(current);
        return;
    }

    int digit = digits[index] - '0';
    const string& letters = mapping[digit];

    for (char letter : letters) 
    {
        generateCombinations(result, digits, current + letter, index + 1);
    }
}

vector<string> letterCombinations(string digits) 
{
    vector<string> result;
    if (!digits.empty()) 
    {
        generateCombinations(result, digits, "", 0);
    }
    return result;
}

int main() 
{
    string digits = "23"; // Example input
    vector<string> combinations = letterCombinations(digits);

    for (const string& combo : combinations) 
    {
        cout << combo << " ";
    }

    return 0;
}
*/


/*// Rat in a Maze.

// Consider a rat placed at (0, 0) in a square matrix of order NN. 
// It has to reach the destination at (N-1, N-1). 
// Find all possible paths that the rat can take to reach from source to destination. 
// The directions in which the rat can move are 'U' (up), 'D' (down), 'L' (left), 'R' (right). 
// Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it 
// while value 1 at a cell in the matrix represents that rat can be travel through it. 
// Note: In a path, no cell can be visited more than one time.

#include <vector>

// Define the order of the matrix
#define N 4

// Function to check if the rat can move to a cell (x, y)
bool isSafe(int maze[N][N], int x, int y) 
{
    // Check if (x, y) is within the matrix bounds and the cell is not blocked (0)
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

// Function to find all paths from (0, 0) to (N-1, N-1) in the matrix
void findPaths(int maze[N][N], int x, int y, vector<char>& path) 
{
    // If the rat reaches the destination, print the path
    if (x == N - 1 && y == N - 1) 
    {
        for (char dir : path) 
        {
            cout << dir << " ";
        }
        cout << endl;
        return;
    }

    // Define possible directions (up, down, left, right)
    char directions[] = {'D', 'U', 'L', 'R'};
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    // Try all possible directions
    for (int i = 0; i < 4; i++) 
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        // Check if the new cell is safe to move
        if (isSafe(maze, newX, newY)) 
        {
            // Mark the cell as visited
            maze[newX][newY] = 0;

            // Add the current direction to the path
            path.push_back(directions[i]);

            // Recursively explore the next cell
            findPaths(maze, newX, newY, path);

            // Backtrack (remove the direction and mark the cell as unvisited)
            path.pop_back();
            maze[newX][newY] = 1;
        }
    }
}

int main() {
    int maze[N][N] = 
    {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    vector<char> path;
    
    // Start from (0, 0)
    findPaths(maze, 0, 0, path);

    return 0;
}
*/


