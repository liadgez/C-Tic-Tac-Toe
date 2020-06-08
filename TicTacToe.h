#pragma once
#include "BoardGame.h"

#include <string>

class TicTacToe : public BoardGame
{
public:
    TicTacToe() : BoardGame(3,3){}; // צריך לאתחל כלוח ריק ולהקצות לשחקן ולאתחל את הסימן שלהם
    ~TicTacToe() {};

    virtual void PerformPlayerMove( Move &move);

    virtual void setGameState(GameState state);

    GameState getGameState();
};


class TicTacToeEdu : virtual public TicTacToe {
public:
    TicTacToeEdu(){_state=InProgress;};
    ~TicTacToeEdu(){};
    virtual void computerNextAIMove(int &row, int &col);
};

class TicTacToeRand : virtual public TicTacToe {
public:
    TicTacToeRand(){_state=InProgress;};
    ~TicTacToeRand (){};
    virtual void computerNextAIMove(int &row, int &col);
};
