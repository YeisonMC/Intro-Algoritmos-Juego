#pragma once
#include "global.h"


//################
//@    MAPA 1    @
//################

void dibujarYeissen(int x, int y) {
    gotoxy(x, y);
    cout << " o ";
    gotoxy(x, y + 1);
    cout << "~|~";
    gotoxy(x, y + 2);
    cout << "| |";
}

//################
//@    MAPA 2    @
//################


void dibujarEnemigo(int x, int y) {
    setColor(4, 8);
    gotoxy(x, y);     cout << "[=]";
    gotoxy(x, y + 1); cout << "/|\\";
}

void borrarEnemigo(int x, int y) {
    setColor(8, 8); 
    gotoxy(x, y);     cout << "   ";
    gotoxy(x, y + 1); cout << "   ";
}

void pintarPista(int x, int y) {
    setColor(4, 4); 
    gotoxy(x, y);     cout << " ";
    gotoxy(x - 1, y); cout << " ";
}

void moverEnemigo() {
    int xEnemigo = 155; // Posición inicial en X
    int yEnemigo = 31;  // Posición inicial en Y
    int alturaEnemigo = 2;

    while (xEnemigo >= 142) {
        dibujarEnemigo(xEnemigo, yEnemigo);

        Sleep(200); 

        borrarEnemigo(xEnemigo, yEnemigo);
        xEnemigo--;
    }

    // Movimiento vertical
    while (yEnemigo <= 35) {
        if (yEnemigo > 31) { // Evitar pintar en y=31
            pintarPista(138, yEnemigo - 1);
        }
        dibujarEnemigo(xEnemigo, yEnemigo);

        Sleep(200); 

        if (yEnemigo > 31) {
            borrarEnemigo(xEnemigo, yEnemigo - 1);
        }

        yEnemigo++;
    }

    int yPista = yEnemigo - 1; 
    while (yPista <= 37) {
        pintarPista(138, yPista);
        Sleep(200); 
        yPista++;
    }

    dibujarEnemigo(xEnemigo, yEnemigo - 1); // yEnemigo - 1 porque incrementamos después del último dibujo
}

void moverEnemigoIzquierda() {
    int xEnemigo = 3;  // Posición inicial en X
    int yEnemigo = 20; // Posición inicial en Y
    int alturaEnemigo = 2;

    // Movimiento horizontal (de izquierda a derecha)
    while (xEnemigo <= 15) {
        dibujarEnemigo(xEnemigo, yEnemigo);

        Sleep(200); // Control de velocidad

        borrarEnemigo(xEnemigo, yEnemigo);
        xEnemigo++;
    }

    // Movimiento vertical (bajando en `y`)
    while (yEnemigo <= 23) {
        if (yEnemigo > 20) { // Evitar pintar en y=20
            pintarPista(22, yEnemigo - 1);
        }
        dibujarEnemigo(xEnemigo, yEnemigo);

        Sleep(200); // Pausa para controlar la velocidad

        if (yEnemigo > 20) {
            borrarEnemigo(xEnemigo, yEnemigo - 1);
        }

        yEnemigo++;
    }

    // Pintar la pista adicional hasta `y=26`
    int yPista = yEnemigo - 1;
    while (yPista <= 26) {
        pintarPista(22, yPista); 
        Sleep(200);
        yPista++;
    }

    dibujarEnemigo(xEnemigo, yEnemigo - 1); // Mantener el enemigo visible en su última posición
}

//################
//@    MAPA 3    @
//################