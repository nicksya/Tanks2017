#include "baseobject.h"

BaseObject::BaseObject() : length(4), width(4), cooX(0), cooY(0) {}

BaseObject::BaseObject(int length, int width, int cooX, int cooY) : length(length), width(width),
    cooX(cooX), cooY(cooY) {}

BaseObject::~BaseObject() {}

int BaseObject::getLength() {return length;}

int BaseObject::getWidth() {return width;}

int BaseObject::getCooX() {return cooX;}

int BaseObject::getCooY() {return cooY;}
