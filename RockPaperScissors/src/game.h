#ifndef game_H
#define game_H

enum Option {ROCK, PAPER, SCISSORS};

class RPS{
private: 
    int userWins;
    int computerWins;

    Option getCompOp();
    Option getUserOp();

    void Winner(Option user, Option computer);


public:
    RPS();
    void play();

};

#endif 