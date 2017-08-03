#ifndef TANK_H
#define TANK_H

#include "BaseMovableObject.h"

class Tank : BaseMovableObject {
public:
    Tank(int teamId = 0, int shield = 1);
    ~Tank();
    void takeDamage(int damage);

private:
    //int shape;
    int teamId;
    int hp = 100;
    int shield;
    void shoot();
};

#endif // TANK_H
