//cpp
#include "tic_tac_toe.h"

using std::string; using std::cout; using std::cin; using std::ostream; using std::istream;

//public

TicTacToe::TicTacToe(int size) : pegs(size * size, "") {}

bool TicTacToe::game_over()
{
    if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "T";
        return true;
    }
    else
    {
        return false;
    }
}

istream& operator>>(istream& in, TicTacToe& game)
{
    int position;

    if(game.pegs.size() == 9)
    {
        cout << "Enter position [1-9]";
        in >> position;

        while(position < 1 || position > 9)
        {
            cout<<"\nInvalid entry. Enter position [1-9]:"<<"\n";
            in.clear();
            in.ignore();
            in >> position;
        }
        game.mark_board(position);
    }
    else if(game.pegs.size() == 16)
    {
        cout << "Enter position [1-16]";
        in >> position;

        while(position < 1 || position > 16)
        {
            cout<<"\nInvalid entry. Enter position [1-16]:"<<"\n";
            in.clear();
            in.ignore();
            in >> position;
        }
        game.mark_board(position);
    }
    return in;
}


ostream& operator<<(ostream& out, TicTacToe& game)
{
    if (game.pegs.size() == 9)
    {
        for (int i = 0; i < 9; i += 3)
        {
            cout << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "\n";
        }
    }
    else if (game.pegs.size() == 16)
    {
        for(int i=0; i < 16; i +=4)
        {
            cout << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "|" << game.pegs[i + 3]
                 << "\n";
        }
    }
    return out;
}


void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}


void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}


string TicTacToe::get_winner()
{
    if (game_over() == true)
    {
        return winner;
    }
}


//private

void TicTacToe::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}


bool TicTacToe::check_board_full()
{
    for(auto peg: pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}


void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}


bool TicTacToe::check_row_win()
{
    return false;
}


bool TicTacToe::check_column_win()
{
    return false;
}


bool TicTacToe::check_diagonal_win()
{
    return false;
}


void TicTacToe::set_winner()
{
    if (player == "x" || player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}