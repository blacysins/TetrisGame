#include "tetromino.h"

bool Tetromino::GetBlock(int x, int y) const
{
    if (this->shape[x][y] == 0)
        return false;
    else
        return true;
}