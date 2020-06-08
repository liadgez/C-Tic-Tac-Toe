#pragma once
#include "BoardGame.h"

#include <string>

class CatchTheRabbit : public BoardGame
{
public:
    CatchTheRabbit() : BoardGame(9,9){}; // צריך לאתחל כלוח ריק ולהקצות לשחקן ולאתחל את הסימן שלהם
    ~CatchTheRabbit() {};

    virtual void PerformPlayerMove( Move &move);

    virtual void setGameState(GameState state);

    GameState getGameState();
};


class CatchTheRabbitEdu : virtual public CatchTheRabbit {
public:
    CatchTheRabbitEdu(){_state=InProgress;};
    ~CatchTheRabbitEdu(){};
    virtual void computerNextAIMove(int &row, int &col);
};

class CatchTheRabbitRand : virtual public CatchTheRabbit {
public:
    CatchTheRabbitRand(){_state=InProgress;};
    ~CatchTheRabbitRand (){};
    virtual void computerNextAIMove(int &row, int &col);
};
