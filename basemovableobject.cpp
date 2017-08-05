#include "basemovableobject.h"
#include "BattleField.h"

BaseMovableObject::BaseMovableObject() {}

BaseMovableObject::BaseMovableObject(BattleField* field, Direction* direction, int speed, int length, int width,
                                     int cooX, int cooY) : BaseObject(length, width, cooX, cooY),
    field(field), direction(direction), speed(speed) {
}

Direction* BaseMovableObject::getDirection() {return direction;}

int BaseMovableObject::getSpeed()
{
    return speed;
}

void BaseMovableObject::move(BaseObject&) {
    if (!field->checkIfMoveAllowed(*this)) return;
    cooX += direction->dx;
    cooY += direction->dy;
}
