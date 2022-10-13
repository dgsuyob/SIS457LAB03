#pragma once
#include "Brick.h"
class bonusBrick :
    public Brick
{
private:
    bool luck;
public:
    void luckItem(bool);
    void life();
    void weaponBonus();
};

