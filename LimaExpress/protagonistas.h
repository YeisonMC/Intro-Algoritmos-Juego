#pragma once
#include "global.h"

//################
//@    MAPA 1    @
//################

// Dibuja el auto en una posición específica


//################
//@    MAPA 2    @
//################

void dibujarAuto(int x, int y) {
    gotoxy(x, y);
    cout << ". - '--`-._";
    gotoxy(x, y + 1);
    cout << "  '-O---O--'";
}



//################
//@    MAPA 3    @
//################