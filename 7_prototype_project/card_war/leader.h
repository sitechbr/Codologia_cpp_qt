#ifndef LEADER_H
#define LEADER_H


class Leader
{
private:
    int army_size;


public:
    Leader(int rang);
    void setArmySize(int unit);
    int getArmySize();
    int attack();
};



#endif // LEADER_H
