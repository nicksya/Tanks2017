#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

class BaseMovableObject;

class BattleField {
public:
    BattleField(int fieldSizeInBlocks = 13, int dotsPerBlock = 4);
    ~BattleField();
    bool checkIfMoveAllowed(BaseMovableObject&);
private:
    int fieldSizeInBlocks;
    int dotsPerBlock;
    int maxCoo;
    bool isNotOverlaps(BaseMovableObject&);
    bool isWithinField(BaseMovableObject&);
};

#endif // BATTLEFIELD_H
