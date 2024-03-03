// Include the necessary header file <iostream> for input and output operations.
#include <iostream>
using namespace std;

// Define a function 'print_board' to display the current state of the game board.
void print_board(char board[3][3]);

// Define a function 'win' to check if a player has won by examining rows, columns, and diagonals.
bool win(char board[3][3], char player);

// Define a function 'draw' to check if the game is a draw.
bool draw(char board[3][3]);

int main() 
{
    char board[3][3] = 
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char players[2] = {'X', 'O'};
    int c_p = 0; // c_p --> Current Player.
    int r, c; // r --> row & c--> column.
    char playAgain;

    while (true) 
    {
        // We enter the main game loop, where players take turns to make moves.
        // Players input their moves (row and column), and we check if the moves are valid.
        // We check for a win or draw after each move and update the game state accordingly.
        cout << "\nCurrent board:\n";
        print_board(board);

        cout << "Player " << players[c_p] << ", enter row (0-2): ";
        cin >> r;
        cout << "Player " << players[c_p] << ", enter column (0-2): ";
        cin >> c;

        if (r >= 0 && r < 3 && c >= 0 && c < 3 && board[r][c] == ' ') 
        {
            board[r][c] = players[c_p];
            
            if (win(board, players[c_p])) 
            {
                cout << "\nPlayer " << players[c_p] << " wins!\n";
                break;
            } 
            else if (draw(board)) 
            {
                cout << "\nThe game is a draw!\n";
                break;
            }
            
            c_p = 1 - c_p; // the value of c_p will be either 1 or 0.
        } 
        else 
        {
            cout << "\n Try again.\n";
        }
    }

    cout << "\n Final board: \n";
    print_board(board);

    cout<<"Play again? (y/n): ";
    cin>> playAgain;
    if (playAgain == 'y'|| playAgain == 'Y') 
    {
        // Reset the board and variables for a new game.
        for (int i = 0; i < 3; i++) 
        {
            for (int j=0; j < 3; j++) 
            {
                board[i][j] == ' ' ;
            }
        } 
        c_p = 0;
        bool win = false;
        bool draw = false;
    } 
    else 
    {
        cout << "Thanks for playing! Goodbye." << endl;
    }
    
    return 0;
}

// to print the game board.
void print_board(char board[3][3]) 
{
    int n=3;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << " " << board[i][j] << " ";
            if (j < n-1) 
            {
               cout << "|";
            }
        }
        cout << "\n";
        if (i < n-1)
        {
          cout << "---|---|---\n";
        }
    }
}

// to check for a win.
bool win(char board[3][3], char player) 
{
    // to check in a inclined way.
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) 
    {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
    {
        return true;
    }
    // to check vrtically & horrizontally.
    for (int i = 0; i < 3; i++) 
    {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) 
        {
            return true;
        }
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) 
        {
            return true;
        }
    }
    return 0;
}

// to check for a draw.
bool draw(char board[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (board[i][j] == ' ') 
            {
                return 0;
            }
        }
    }
    return 1;
}