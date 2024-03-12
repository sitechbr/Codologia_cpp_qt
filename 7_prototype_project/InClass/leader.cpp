#include "leader.h"

Leader::Leader(int rang)
{
    if(rang == 1) {
        army_size = 100;
    }
    if(rang == 2) {
        army_size = 500;
    }
    if(rang == 3) {
        army_size = 1000;
    }
    if(rang <1 || rang>3) {
        army_size = 0;
    }

}

int Leader::attack() {
    return (int)army_size*0.1;
}

int Leader::getArmySize() {
    return army_size;
}
void Leader::setArmySize(int unit) {
    army_size=unit;
}
