#ifndef BASEMOVABLEOBJECT_H
#define BASEMOVABLEOBJECT_H

#include "baseobject.h"
#include "Direction.h"

class BattleField;

class BaseMovableObject : public BaseObject {
public:
    BaseMovableObject();
    BaseMovableObject(BattleField*, Direction*, int speed = 1, int length = 4, int width = 4, int cooX = 0, int cooY = 0);
    Direction* getDirection();
    int getSpeed();
private:
    BattleField* field;
    Direction* direction;
    void move(BaseObject&);
    int speed;
};

#endif // BASEMOVABLEOBJECT_H
