#include <raylib.h>

int main(void) {
    // some constants
    const int SCREEN_WIDTH = 1920;
    const int SCREEN_HEIGHT = 1080;

    // init
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "The East Adventure");
    SetTargetFPS(120);

    // game loop
    while (!WindowShouldClose()) {
        

        // drawing
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Welcome to Ukraine", 900, 540, 30, BLACK);

        EndDrawing();
    }

    return 0;
}