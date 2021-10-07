#include <iostream>

class DrawAPI
{
public:
    virtual void draw() = 0;
};

class DrawOpenGL : public DrawAPI
{
public:
    void draw() {std::cout << "Drawing Brick with OpenGL" << std::endl;};
};

class DrawVulkan : public DrawAPI
{
public:
    void draw() {std::cout << "Drawing Brick with Vulkan" << std::endl;};
};
