#include "../include/Abstraction/AbstractFactory.h"
#include "../include/Game.h"
#include <vector>

int main(int argc, char** argv)
{
    
    Factory* factory = new BrickFactory;
    std::vector<Brick*> bricks;

    bricks.push_back(factory->CreateBigBrick());
    bricks.push_back(factory->CreateSmallBrick());

    for(int i = 0; i < bricks.size(); i++)
    {
        bricks[i]->draw();
    }

    /*Game game;
    game.run();*/

    
    return 1;
}