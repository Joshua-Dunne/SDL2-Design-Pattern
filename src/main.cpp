#include "../include/Abstraction/AbstractFactory.h"
#include "../include/Bridge/Handle.h"
#include "../include/Bridge/BridgeBrick.h"
#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    // Abstract Factory Implementation
    Factory* factory = new BrickFactory;
    std::vector<Brick*> bricks;

    bricks.push_back(factory->CreateBigBrick());
    bricks.push_back(factory->CreateSmallBrick());

    for(int i = 0; i < bricks.size(); i++)
    {
        bricks[i]->draw();
    }

    // Handle Class Implementation
    HandleToBrick handle;
    handle->Print();

    DrawAPI* openApi = new DrawOpenGL();
    Brick* openBrick = new BridgeBrick(openApi);
    openBrick->draw();

    DrawAPI* vulkanAPI = new DrawVulkan();
    Brick* vulkanBrick = new BridgeBrick(vulkanAPI);
    vulkanAPI->draw();
    
    std::cin.get();
   
    return 1;
}