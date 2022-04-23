#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; using std::string;

int main()
{
    unique_ptr<TicTacToe> game;
    TicTacToeData data;
    string first_player;
    int board_size;
    char choice;

    TicTacToeManager manager(data);

    do
    {
        cout << "Enter 3 to play on a 3x3 grid or enter 4 to play on a 4x4 grid:  ";
        cin >> board_size;
        while (board_size != 3 && board_size != 4)
        {
            cout << "Invalid input. Please enter 3 or 4.\n";
            cin >> board_size;
        }

        if (board_size == 3)
        {
            game = std::make_unique<TicTacToe3>();
        }
        else if (board_size == 4)
        {
            game = std::make_unique<TicTacToe4>();
        }

        // Select first player
        cout << "\nEnter first player (X or O): ";
        cin >> first_player;
        while (first_player != "X" && first_player != "O")
        {
            cout << "Invalid input. Please enter X or O.\n";
            cin >> first_player;
        }

        game->start_game(first_player);

        while(game->game_over() == false)
        {
            cin >> *game;
            cout << *game;

            if (game->game_over() == true)
            {
                if (game->get_winner() == "T")
                {
                    cout << "The game is a tie.\n";
                }
                else
                {
                    cout << game->get_winner() << " is the winner.\n";
                }
            }
        }

        manager.save_game(game);
        cout << "Game Over.\n";
        cout << "\n" << manager;
        cout << "\n";

        cout << "Enter Y to play again. Press any other button to quit.";
        cin >> choice;
        cout << "\n";

    } while (choice == 'Y' || choice == 'y');

    cout << manager;
	return 0;
}