#include <SDL.h>
#include <iostream>
#include <string>
#include "Bricks.h"

class Factory
{
public:
    virtual ~Factory(){}

    virtual Brick* CreateBigBrick() = 0;
    virtual Brick* CreateSmallBrick() = 0;
};

class BrickFactory : public Factory
{
public:
    virtual ~BrickFactory(){}

    Brick* CreateBigBrick()
    {
        return new BigBrick;
    }

    Brick* CreateSmallBrick()
    {
        return new SmallBrick;
    }
};