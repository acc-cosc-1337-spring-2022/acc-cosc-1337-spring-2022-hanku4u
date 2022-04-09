//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"

using std::vector; using std::string; using std::cout; using std::cin; using std::ostream; using std::istream;

//public

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager)
{
    for (auto i : manager.games)
    {
        out << i <<"\n";
    }

    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";

    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;
}

//-------------------------------------------------------------------------------------------------------------------
//private

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win += 1;
    }
    else if (winner == "O")
    {
        o_win += 1;
    }
    else if (winner == "T")
    {
        ties += 1;
    }
}