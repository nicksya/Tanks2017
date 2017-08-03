#include "basemovableobject.h"
#include "BattleField.h"

BaseMovableObject::BaseMovableObject() {}

BaseMovableObject::BaseMovableObject(BattleField* field, Direction* direction, int speed) : field(field),
    direction(direction), speed(speed) {}

Direction* BaseMovableObject::getDirection() {return direction;}

void BaseMovableObject::move(BaseObject *) {
    if (!field->checkIfMoveAllowed(this)) return;
    cooX += direction->dx;
    cooY += direction->dy;
}
