/*******************************************************************************************
*
*   raylib [core] example - 2d camera
*
*   This example has been created using raylib 3.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

void MyCustomKeyCallback(int key, int scancode, int action, int mods);
void MyCustomMouseButtonCallback(int button, int action, int mods);
void MyCustomMouseCursorPosCallback(double x, double y);
void MyCustomCharCallback(unsigned int key);
void MyCustomCursorEnterCallback(int enter);
void MyCustomWindowSizeCallback(int width, int height);
void MyCustomWindowIconifyCallback(int iconified);
void MyCustomWindowFocusCallback(int focused);
void MyCustomWindowDropCallback(int count, const char **paths);
void MyCustomWindowMaximizeCallback(int maximized);

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    InitWindow(screenWidth, screenHeight, "raylib [core] example - custom input/window callbacks");

    SetTargetFPS(60);                   // Set our game to run at 60 frames-per-second

    SetCustomKeyCallback(MyCustomKeyCallback);
    SetCustomMouseButtonCallback(MyCustomMouseButtonCallback);
    SetCustomMouseCursorPosCallback(MyCustomMouseCursorPosCallback);
    SetCustomCharCallback(MyCustomCharCallback);
    SetCustomCursorEnterCallback(MyCustomCursorEnterCallback);
    SetCustomWindowSizeCallback(MyCustomWindowSizeCallback);
    SetCustomWindowIconifyCallback(MyCustomWindowIconifyCallback);
    SetCustomWindowFocusCallback(MyCustomWindowFocusCallback);
    SetCustomWindowDropCallback(MyCustomWindowDropCallback);
    SetCustomWindowMaximizeCallback(MyCustomWindowMaximizeCallback);

    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())        // Detect window close button or ESC key
    {
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(LIGHTGRAY);
            DrawText("See the output on console.", 100, 100, 14, BLACK);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}


void MyCustomKeyCallback(int key, int scancode, int action, int mods)
{
    TraceLog(LOG_INFO, "Key=%d - Scancode=%d - Action=%d - Mods=%d", key, scancode, action, mods);
}

void MyCustomMouseButtonCallback(int button, int action, int mods)
{
    TraceLog(LOG_INFO, "Button=%d - Action=%d - Mods=%d", button, action, mods);
}

void MyCustomMouseCursorPosCallback(double x, double y)
{
    TraceLog(LOG_INFO, "X=%f - Y=%f", x, y);
}

void MyCustomCharCallback(unsigned int key)
{
    TraceLog(LOG_INFO, "Key=%d", key);
}

void MyCustomCursorEnterCallback(int enter)
{
    TraceLog(LOG_INFO, "Enter=%d", enter);
}

void MyCustomWindowSizeCallback(int width, int height)
{
    TraceLog(LOG_INFO, "Width=%d - Height=%d", width, height)
}

void MyCustomWindowIconifyCallback(int iconified)
{
    TraceLog(LOG_INFO, "Iconified=%d", iconified);
}

void MyCustomWindowFocusCallback(int focused)
{
    TraceLog(LOG_INFO, "Focused=%d", focused);
}

void MyCustomWindowDropCallback(int count, const char **paths)
{
    TraceLog(LOG_INFO, "Count=%d", count);
}

void MyCustomWindowMaximizeCallback(int maximized)
{
    TraceLog(LOG_INFO, "Maximized=%d", maximized);
}