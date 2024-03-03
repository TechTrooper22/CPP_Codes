#include<iostream>
#include<string>
using namespace std;
int main()
{
    int countC = 0, countW = 1;
    string str;
    cout << "Enter sentence: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            countC += 0;
            countW += 1;
        }
        else{
           countC += 1; 
        }
    }
    cout << "Total characters without space: " << countC << endl;
    cout << "Total words in the sentence: " << countW << endl;
    return 0;
}