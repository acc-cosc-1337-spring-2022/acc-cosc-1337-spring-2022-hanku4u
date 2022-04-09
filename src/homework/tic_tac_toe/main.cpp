#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; using std::string;

int main() 
{
    TicTacToeManager manager;
    char choice = 'Y';

    while (choice == 'Y' || choice == 'y')
    {
        TicTacToe game;
        string first_player;
        cout << "Enter first player (X or O):\n";
        cin >> first_player;
        while (first_player != "X" && first_player != "O")
        {
            cout << "Invalid character. Please enter an 'X' or an 'O':\n";
            cin >> first_player;
        }

        game.start_game(first_player);

        while(game.game_over() == false)
        {
            cin >> game;
            cout << "\n" << game << "\n";
        }

        auto winner = game.get_winner();
        manager.save_game(game);
        cout << "Game Over." << "\n";
        cout << "The winner is " << winner << "\n";
        cout << manager;
        cout << "\nEnter 'Y' to play again. Enter any other key to quit.\n";
        cin >> choice;
    }
    cout << "\n" << manager;

	return 0;
}