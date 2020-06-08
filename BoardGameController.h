#pragma once
#include "Interface.h"
#include "TicTacToe.h"
using namespace std;


class  BoardGameController {

public:

    BoardGameController() {};
    ~BoardGameController() {};
    void Play();

private:
        std::shared_ptr<Interface> view;
        std::shared_ptr<BoardGame> game;

};