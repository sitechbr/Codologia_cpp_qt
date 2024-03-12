#ifndef ARCHER_H
#define ARCHER_H


class Archer
{
private:
    int quantity;

public:
    Archer();
    int attack();
    void setQuantity(int q);
    int getQuantity();

};

#endif // ARCHER_H
