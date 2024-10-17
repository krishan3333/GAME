#include "raylib.h"

int main() {
    
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Bouncing Ball Example");

   
    float ballRadius = 20.0f;
    Vector2 ballPosition = { screenWidth / 2.0f, screenHeight / 2.0f };
    Vector2 ballSpeed = { 300.0f, 200.0f };  
    Color ballColor = RED;

    SetTargetFPS(60);  

    
    while (!WindowShouldClose()) {  
        
        ballPosition.x += ballSpeed.x * GetFrameTime();
        ballPosition.y += ballSpeed.y * GetFrameTime();

       
        if ((ballPosition.x - ballRadius <= 0) || (ballPosition.x + ballRadius >= screenWidth)) {
            ballSpeed.x *= -1;  
        }
        if ((ballPosition.y - ballRadius <= 0) || (ballPosition.y + ballRadius >= screenHeight)) {
            ballSpeed.y *= -1;  
        }

       
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        DrawCircleV(ballPosition, ballRadius, ballColor);  
        
        DrawText("Bouncing Ball!", 10, 10, 20, DARKGRAY);  

        EndDrawing();
    }

    
    CloseWindow();

    return 0;
}
