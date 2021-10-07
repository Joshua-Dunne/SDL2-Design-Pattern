#include <iostream>

class HandleBrick{
public:
    HandleBrick(){}
    void Print() {std::cout << "Printing Brick Handle" << std::endl;}

};

class HandleToBrick{
public:
    HandleToBrick() : Brick(new HandleBrick()){}
    HandleBrick* operator->() {return Brick;} // overloaded ->
private:
    HandleBrick* Brick;
};