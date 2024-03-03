// This program takes two numbers and an operator as input and then performs the requested arithmetic operation, displaying the result. 
// It also includes error handling for division by zero and invalid operations.

// Include the necessary header file <iostream> for input and output operations
#include <iostream>
using namespace std;

int main() 
{
    // Declare variables to store the user's chosen operation, two numbers, and the result.
    int n1, n2;
    char operation;

    cout << "Enter first number, n1 : ";
    cin >> n1;

    cout << "Enter second number, n2 : ";
    cin >> n2;

    cout << "Enter '+' operation for Addition of two numbers." << endl << 
            "Enter '-' operation for Subtraction of two numbers." << endl <<
            "Enter '*' operation for Multiplication of two numbers." << endl <<
            "Enter '/' operation for Dividionn of two numbers." << endl << 
            "Enter '%' operation for Modulus of two numbers." << endl <<
            "Enter 'A' operation for performing all the above operations." << endl << endl;
            
    cout << "Enter operation (+, -, *, /, %, A ( shows result for all five basic operations ) ): ";
    cin >> operation;

    // Use a switch statement to perform the selected operation based on the value of the operation variable.
    // Calculate the result and display it.
    switch (operation) 
    {
        case '+':
            cout << "Sum = " << n1 + n2 << endl;
            break; 

        case '-':
            cout << "Difference =  " << n1 - n2 << endl;
            break;

        case '*':
            cout << "Product = " << n1 * n2 << endl;
            break;

        case '/':
        // For division, check if the second number (n2) is not zero to avoid division by zero errors.
            if (n2 != 0) 
            {
                cout << "Quotient = " << n1 / n2 << endl;
            } 
            else 
            {
                cout << "Cannot divide by Zero !" << endl;
            }
            break;

        case '%' :
            cout << "Remainder = " << n1 % n2 << endl;

        case 'A':
             cout << "Sum = " << n1 + n2 << endl;
             cout << "Difference =  " << n1 - n2 << endl;
             cout << "Product = " << n1 * n2 << endl;
             if (n2 != 0) 
             {
                cout << "Quotient = " << n1 / n2 << endl;
             } 
             else 
             {
                cout << "Cannot divide by Zero !" << endl;
             }
             cout << "Remainder = " << n1 % n2 << endl;
             break;
             
        default:
        // If the user enters an invalid operation, display an error message
            cout << "Invalid Operation !" << endl;
            break;
    }

    return 0;
    // Exit the program.
}