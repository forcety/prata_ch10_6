#include <iostream>
#include "move.h"



Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
}

Move Move::add(const Move &m) const
{
    Move s(m.x + this->x, m.y + this->y);
    return s;
}
