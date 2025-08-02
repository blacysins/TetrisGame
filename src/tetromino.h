#ifndef TETROMINO_H
#define TETROMINO_H

#include "raylib.h"
#include "utils.h"

class Tetromino
{
public:
    bool shape[4][4];
    Position pos;
    Color color;
    int rotation_state;

    void MoveLeft();
    void MoveRight();
    void MoveDown();
    void Rotate();
    bool GetBlock(int x, int y) const;
};

#endif // TETROMINO_H
