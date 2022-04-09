//h
#include <string>
#include <vector>
#include <iostream>
#include "tic_tac_toe.h"

using std::string; using std::vector; using std::istream; using std::ostream;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    void save_game(TicTacToe b);
    friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int& t);

private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
};



#endif