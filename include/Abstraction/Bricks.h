#include <iostream>

class Brick
{
public:
    virtual ~Brick(){}
    virtual void draw() = 0;
};

class BigBrick : public Brick
{
    void draw() {std::cout << "Big Brick Drawing" << std::endl;};
};

class SmallBrick : public Brick
{
    void draw() {std::cout << "Small Brick Drawing" << std::endl;};
};