
// Include the necessary header files for input/output (iostream), random number generation (ctime and cstdlib).
#include <iostream>
#include <cstdlib>
#include <ctime>

// Use the 'using namespace std;' statement to simplify input/output code.
using namespace std;

int main() 
{
    // Seed the random number generator with the current time using 'srand(time(0));'. 
    // This ensures that the random number generated is different each time you run the program.
    srand(time(0));  

    // Generate a random number between 1 and 100 using 'rand() % 100 + 1;'.
    int randnum = 1 + rand() % 100;  

    // Initialize variables for the user's guess, the number of attempts, and display a welcome message.
    int guess;
    int attempts = 0;
    cout << endl << "Welcome!" << endl  << "Let's Start The Game -->" << endl << endl;

    // Use a do-while loop to repeatedly ask the user for their guess and provide feedback until they guess the correct number.

    // Inside the loop, compare the user's guess with the random number and give feedback if it's too high or too low.
    do 
    {
        cout << "Guess the number (between 1 & 100): ";    
        cin >> guess;
        attempts ++;

        if (guess < randnum) 
        {
            cout << "Your guessed too low! Try again." << endl;
        } 
        else if (guess > randnum) 
        {
            cout << "Your guessed too high! Try again." << endl;
        } 
        else 
        {
            cout << "Congratulations!" << endl;
            cout << "You guessed the number " << randnum << " in " << attempts << " attempts." << endl;
        }
    } while (guess != randnum);
    // When the user guesses the correct number, display a congratulatory message along with the number of attempts.
    return 0;
    // Exit the program when the correct number is guessed.
}