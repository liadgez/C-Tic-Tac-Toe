#include "Game.h"
#include "vector"

#ifndef PROJECT_GAMES_BOARDGAME_H
#define PROJECT_GAMES_BOARDGAME_H

using namespace std;

class BoardGame :  public Game {
public:
    BoardGame(int rows, int cols);
    vector< vector<char>> & getVec();
    bool makeMove(char ch);
    bool checkMove(int row, int col);
    bool checkWin ();

protected:
    int _rows;
    int _cols;
    GameState _state = Off;
    vector< vector<char> > vec;
};


#endif //PROJECT_GAMES_BOARDGAME_H
