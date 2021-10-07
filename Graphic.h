#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "IGraphic.h"

class Graphic : public IGraphic
{
    Graphic();
    ~Graphic();
    void Draw();
};

#endif