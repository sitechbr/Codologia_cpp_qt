#ifndef LEADER_H
#define LEADER_H
#include "archer.h"

class Leader
{
private:
    int army_size;
public:
    Leader(int rang);
    Archer a1;
    int attack();
    int getArmySize();
    void setArmySize(int unit);


};

#endif // LEADER_H
