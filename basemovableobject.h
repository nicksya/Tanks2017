#ifndef BASEMOVABLEOBJECT_H
#define BASEMOVABLEOBJECT_H

#include "baseobject.h"
#include "Direction.h"

class BattleField;

class BaseMovableObject : BaseObject {
public:
    BaseMovableObject();
    BaseMovableObject(BattleField*, Direction*, int);
    Direction* getDirection();
private:
    BattleField* field;
    Direction* direction;
    void move(BaseObject*);
    int speed;
};

#endif // BASEMOVABLEOBJECT_H
