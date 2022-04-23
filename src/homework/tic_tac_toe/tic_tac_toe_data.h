
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <fstream>

using std::string; using std::vector; using std::istream; using std::ostream; using std::unique_ptr;

class TicTacToeData
{
public:
    void save_games(const vector<unique_ptr<TicTacToe>>& games);
    vector<unique_ptr<TicTacToe>> get_games();

private:
    const string file_name{"tic_tac_toe.dat"};
};

#endif