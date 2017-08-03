#ifndef BASEOBJECT_H
#define BASEOBJECT_H

class BaseObject {
public:
    BaseObject();
    BaseObject(int length, int widgh, int cooX, int cooY);
    ~BaseObject();
    int getLength();
    int getWidth();
    int getCooX();
    int getCooY();
protected:
    int length;
    int width;
    int cooX;
    int cooY;
};

#endif // BASEOBJECT_H
