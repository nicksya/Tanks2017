#include "baseobject.h"

BaseObject::BaseObject() {}

BaseObject::BaseObject(int length, int width, int cooX, int cooY) : length(length), width(width),
    cooX(cooY), cooY(cooY) {}

BaseObject::~BaseObject() {}

int BaseObject::getLength() {return length;}

int BaseObject::getWidth() {return width;}

int BaseObject::getCooX() {return cooX;}

int BaseObject::getCooY() {return cooY;}
