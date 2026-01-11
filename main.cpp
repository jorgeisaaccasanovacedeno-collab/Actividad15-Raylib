#include <raylib.h>

int main(void) {
    // 1. Inicialización de la ventana (800x600 píxeles)
    InitWindow(800, 600, "Versión final: 3 commits completados");

    // 2. Establecer el límite de FPS (60 cuadros por segundo)
    SetTargetFPS(60); 

    // 3. Bucle principal del juego
    while (!WindowShouldClose()) { 
        // Comienzo del proceso de dibujo
        BeginDrawing();
        
        // Limpiar el fondo con color blanco
        ClearBackground(LIGHTGRAY);
        
        // Dibujar el texto en pantalla (Texto, Posición X, Posición Y, Tamaño, Color)
        DrawText("Raylib funciona en mi Repositorio", 190, 280, 20, RED);
        
        // Finalizar el dibujo y mostrar en pantalla
        EndDrawing();
    }

    // 4. Cerrar la ventana y liberar recursos
    CloseWindow(); 
    
    return 0;
}
