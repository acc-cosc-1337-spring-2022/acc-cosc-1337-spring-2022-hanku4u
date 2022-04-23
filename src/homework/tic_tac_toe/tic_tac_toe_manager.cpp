
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_data.h"

using std::vector; using std::string; using std::cout; using std::cin; using std::ostream; using std::istream;


void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

ostream& operator<<(ostream& out, TicTacToeManager& manager)
{
    for (auto i=0; i < manager.games.size(); i++)
    {
        out << *manager.games[i] <<"\n";
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


TicTacToeManager::TicTacToeManager(TicTacToeData d) : data{d}
{
    games = data.get_games();

    for(auto& game: games)
    {
        update_winner_count(game->get_winner());
    }
}


TicTacToeManager::~TicTacToeManager()
{
    cout<<"\n save games\n";
    data.save_games(games);
}