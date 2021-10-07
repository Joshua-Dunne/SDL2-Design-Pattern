#include "../Abstraction/Bricks.h"
#include "DrawAPI.h"

class BridgeBrick : public Brick
{
public:
    BridgeBrick(DrawAPI* api){this->api = api;}
    void draw() {api->draw();};

private:
    DrawAPI* api;
};