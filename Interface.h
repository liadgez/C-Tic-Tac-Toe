#include <vector>
#include "BoardGame.h"

#ifndef PROJECT_GAMES_INTERFACE_H
#define PROJECT_GAMES_INTERFACE_H

using  namespace  std;

class Interface {
public:
    Interface();
    ~Interface() {};
    vector<int> gameMenu();
    int getRow();
    int getCol();
    void presentWinner(char ch);
    void itsTie();

    void show(BoardGame &gameObj);
};


#endif //PROJECT_GAMES_INTERFACE_H
