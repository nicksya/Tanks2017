#ifndef BASEOBJECT_H
#define BASEOBJECT_H

class BaseObject {
public:
    BaseObject();
    BaseObject(int, int, int, int);
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
