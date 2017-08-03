#include "BattleField.h"
#include "BaseMovableObject.h"

BattleField::BattleField(int fieldSizeInBlocks, int dotsPerBlock) : fieldSizeInBlocks(fieldSizeInBlocks),
    dotsPerBlock(dotsPerBlock)
{
    maxCoo = dotsPerBlock * fieldSizeInBlocks;
}

BattleField::~BattleField() {}

bool BattleField::checkIfMoveAllowed(BaseMovableObject* mover) {
    int length = mover->getLength();
    int width  = mover->getWidth();
    int cooX = mover->getCooX();
    int cooY = mover->getCooY();
    int dx = mover->getDirection()->dx;
    int dy = mover->getDirection()->dy;
    int newX = cooX+dx;
    int newY = cooY+dy;
    if ((newX-width)  < 0 || (newX+width)  > maxCoo) {return false;}
    if ((newY-length) < 0 || (newY+length) > maxCoo) {return false;}
    return true;
}
