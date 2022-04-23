#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector; using std::istream; using std::ostream;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size);
    TicTacToe(vector<string> p, string win) : pegs(p), winner(win){};
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{return player;}
    string get_winner();
    vector<string>get_pegs() const{return pegs;}
    friend istream& operator>>(istream& in, TicTacToe& game);
    friend ostream& operator<<(ostream& out, TicTacToe& game);

protected:
    std::vector<std::string> pegs;
    virtual bool check_row_win();
    virtual bool check_column_win();
    virtual bool check_diagonal_win();

private:
    string player;
    string winner;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();

};

#endif
