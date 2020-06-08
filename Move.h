
#ifndef PROJECT_GAMES_MOVE_H
#define PROJECT_GAMES_MOVE_H

    class Move {
public:
    Move(){};
   void  setMove (int row, int col, char ch) {
            _col=col;
            _row=row;
            _mark=ch;
    };
    ~Move(){};
int getCol(){return  this->_col;};
        int getRow(){return  this->_row;};
        char getMark(){return  this->_mark;};

private:
          int _col=-1 ;
          int _row=-1 ;
          char _mark;
};


#endif //PROJECT_GAMES_MOVE_H
