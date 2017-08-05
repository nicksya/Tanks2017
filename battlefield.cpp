#include "BattleField.h"
#include "BaseMovableObject.h"
#include "stdio.h"

BattleField::BattleField(int fieldSizeInBlocks, int dotsPerBlock) : fieldSizeInBlocks(fieldSizeInBlocks),
    dotsPerBlock(dotsPerBlock)
{
    maxCoo = dotsPerBlock * fieldSizeInBlocks;
}

BattleField::~BattleField() {}

bool BattleField::isWithinField(BaseMovableObject& mover) {
    int length = mover.getLength();
    int width  = mover.getWidth();
    int cooX = mover.getCooX();
    int cooY = mover.getCooY();
    int dx = mover.getDirection()->dx;
    int dy = mover.getDirection()->dy;
    int speed = mover.getSpeed();
    int newX = cooX*dx*speed+cooX;
    int newY = cooY*dy*speed+cooY;
    if ((newX  < 0) || (newX+width)  > maxCoo) {return false;}
    if ((newY  < 0) || (newY+length) > maxCoo) {return false;}
    return true;
}

bool BattleField::isNotOverlaps(BaseMovableObject& mover) {
    return true;
}

bool BattleField::checkIfMoveAllowed(BaseMovableObject& mover) {
    return isWithinField(mover) && isNotOverlaps(mover);
}
