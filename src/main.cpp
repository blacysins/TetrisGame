#include "raylib.h"

int main(void)
{

    InitWindow(800, 600, "Tetris Game");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Tetris Game", 10, 10, 20, WHITE);
        EndDrawing();
    }
    CloseWindow();

    return 0;
}