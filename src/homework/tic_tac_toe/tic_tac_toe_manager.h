//h
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include "tic_tac_toe.h"

using std::string; using std::vector; using std::istream; using std::ostream; using std::unique_ptr;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    void save_game(std::unique_ptr<TicTacToe>&);
    friend ostream& operator<<(ostream& out, TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int& t);

private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
};

#endif