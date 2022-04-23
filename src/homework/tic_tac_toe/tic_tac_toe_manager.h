
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include <memory>
#include <utility>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"

using std::string; using std::vector; using std::istream; using std::ostream; using std::unique_ptr;

class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData data);
    void save_game(std::unique_ptr<TicTacToe>& game);
    friend ostream& operator<<(ostream& out, TicTacToeManager& manager);
    void get_winner_total(int& o, int& x, int& t);
    ~TicTacToeManager();

private:
    vector<unique_ptr<TicTacToe>> games;
    TicTacToeData data;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
};

#endif