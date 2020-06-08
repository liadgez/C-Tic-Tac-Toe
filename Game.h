#pragma once
#include "Move.h"


enum GameState {
    PlayerWins, ComputerWins, Tie, InProgress, Off
};

class Game
        {
public:

    virtual ~Game(){};

    virtual void computerNextAIMove(int &row, int &col) = 0;

    virtual void PerformPlayerMove( Move &move) = 0;

    virtual GameState getGameState() = 0;

    virtual void setGameState(GameState state) =0;

};