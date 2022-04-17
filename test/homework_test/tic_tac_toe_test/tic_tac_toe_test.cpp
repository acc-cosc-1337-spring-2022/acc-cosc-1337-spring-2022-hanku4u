#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <memory>
#include <vector>

using std::make_unique; using std::unique_ptr;


//TEST_CASE("Test first player is set to 'X'")
//{
//    TicTacToe player;
//
//    player.start_game("X");
//    REQUIRE("X" == player.get_player());
//}
//
//TEST_CASE("Test first player is set to 'O'")
//{
//    TicTacToe player;
//
//    player.start_game("O");
//    REQUIRE("O" == player.get_player());
//}

TEST_CASE("Test tic tac toe game over for a tie")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(true == game->game_over());
    REQUIRE("T" == game->get_winner());
}

TEST_CASE("Test tic tac toe for first column win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test tic tac toe for second column win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test tic tac toe for third column win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test tic tac toe for first row win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test tic tac toe for second row win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test tic tac toe for third row win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test tic tac toe for top-left diagonal win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test tic tac toe for bottom-left diagonal win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

    game->start_game("X");
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe game over for a tie")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(false == game->game_over());
    game->mark_board(13);
    REQUIRE(false == game->game_over());
    game->mark_board(14);
    REQUIRE(false == game->game_over());
    game->mark_board(10);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(15);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(false == game->game_over());
    game->mark_board(12);
    REQUIRE(false == game->game_over());
    game->mark_board(16);
    REQUIRE(true == game->game_over());
    REQUIRE("T" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for first column win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(false == game->game_over());
    game->mark_board(10);
    REQUIRE(false == game->game_over());
    game->mark_board(13);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for second column win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(10);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(14);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for third column win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(12);
    REQUIRE(false == game->game_over());
    game->mark_board(15);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for fourth column win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(12);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(16);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for first row win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for second row win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(5);
    REQUIRE(false == game->game_over());
    game->mark_board(9);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(10);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(8);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for third row win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(9);
    REQUIRE(false == game->game_over());
    game->mark_board(13);
    REQUIRE(false == game->game_over());
    game->mark_board(10);
    REQUIRE(false == game->game_over());
    game->mark_board(14);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(15);
    REQUIRE(false == game->game_over());
    game->mark_board(12);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for fourth row win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(13);
    REQUIRE(false == game->game_over());
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(14);
    REQUIRE(false == game->game_over());
    game->mark_board(2);
    REQUIRE(false == game->game_over());
    game->mark_board(15);
    REQUIRE(false == game->game_over());
    game->mark_board(3);
    REQUIRE(false == game->game_over());
    game->mark_board(16);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}


TEST_CASE("Test 4x4 board tic tac toe for top-left diagonal win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(10);
    REQUIRE(false == game->game_over());
    game->mark_board(16);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test 4x4 board tic tac toe for bottom-left diagonal win")
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    game->mark_board(4);
    REQUIRE(false == game->game_over());
    game->mark_board(1);
    REQUIRE(false == game->game_over());
    game->mark_board(7);
    REQUIRE(false == game->game_over());
    game->mark_board(6);
    REQUIRE(false == game->game_over());
    game->mark_board(10);
    REQUIRE(false == game->game_over());
    game->mark_board(11);
    REQUIRE(false == game->game_over());
    game->mark_board(13);
    REQUIRE(true == game->game_over());
    REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test TicTacToe manager")
{
    unique_ptr<TicTacToe> game;
    TicTacToeManager manager;
    int x = 0;
    int o = 0;
    int t = 0;

    game = make_unique<TicTacToe3>();

    game->start_game("X");
    REQUIRE(game->game_over() == false);
    game->mark_board(1);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(4);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(5);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(3);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(9);//X
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");

    manager.save_game(game);
    game = make_unique<TicTacToe3>();

    game->start_game("O");
    game->mark_board(1);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(4);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(2);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(9);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(3);//O
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "O");

    manager.save_game(game);
    game = make_unique<TicTacToe3>();

    game->start_game("O");
    game->mark_board(1);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(4);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(2);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(5);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(6);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(3);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(7);//X
    REQUIRE(game->game_over() == false);
    game->mark_board(8);//O
    REQUIRE(game->game_over() == false);
    game->mark_board(9);//X
    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "T");

    manager.save_game(game);
    game = make_unique<TicTacToe3>();

    manager.get_winner_total(o, x, t);
    REQUIRE(o == 1);
    REQUIRE(x == 1);
    REQUIRE(t == 1);
}