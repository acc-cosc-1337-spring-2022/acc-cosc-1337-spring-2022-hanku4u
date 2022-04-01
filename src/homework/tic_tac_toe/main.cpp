#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{
    TicTacToe game;
    string first_player;
    char choice;

    do
    {
        cout << "Enter first player (X or O):\n";
        cin >> first_player;
        while (first_player != "X" && first_player != "O" && first_player != "x" && first_player != "o")
        {
            cout << "Invalid character. Please enter an 'X' or an 'O':\n";
            cin >> first_player;
        }

        int position;
        game.start_game(first_player);

        while(game.game_over() == false)
        {
            cout<<"Enter position [1-9]";
            cin>>position;
            while (position != 1 && position != 2 && position != 3 && position != 4 && position != 5 && position != 6 &&
                   position != 7 && position != 8 && position != 9)
            {
                cout << "Invalid entry. Enter position [1-9]:\n";
                cin.clear();
                cin.ignore();
                cin>>position;
            }
            game.mark_board(position);
            game.display_board();
        }
        auto winner = game.get_winner();
        cout<<"The winner is "<<winner<<".\n";
        cout<<"Enter 'Y' for a new game. Enter any other key to quit.\n";
        cin>>choice;
        }while(choice == 'Y' || choice == 'y');

	return 0;
}