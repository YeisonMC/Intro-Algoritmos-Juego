#pragma once
#include "global.h"
#include "mapa01.h" 

//################
//@    MAPA 1    @
//################

void dibujarGato(int x, int y) {
    gotoxy(x, y); cout << "|\\-/|";
    gotoxy(x, y + 1); cout << "(owo)";
    gotoxy(x, y + 2); cout << "(v v)";
}

void borrar(int x, int y) {
    gotoxy(x, y); cout << "     ";
    gotoxy(x, y + 1); cout << "     ";
    gotoxy(x, y + 2); cout << "     ";
}
//################
//@    MAPA 2    @
//################

int xHelicoptero = 0;
int yHelicoptero = 0;

void dibujarHelicoptero(int x, int y) {
    gotoxy(x, y);
    cout << "   -----|----- ";
    gotoxy(x, y + 1);
    cout << " *>=====[_]L)  ";
    gotoxy(x, y + 2);
    cout << "      -'-`-\"  ";
}

void borrarHelicoptero(int x, int y) {
    gotoxy(x, y); cout << "               ";
    gotoxy(x, y + 1); cout << "               ";
    gotoxy(x, y + 2); cout << "               ";
}

void dibujarSimbolo(int x, int y) {
    gotoxy(x, y);
    cout << "*";
}

void borrarSimbolo(int x, int y) {
    gotoxy(x, y); cout << " ";
}

void redibujarFondo(int x, int y) {
    setColor(0, 3);
    gotoxy(x, y); cout << "               ";
    gotoxy(x, y + 1); cout << "               ";
    gotoxy(x, y + 2); cout << "               ";
    setColor(12, 3);
}

void restaurarFondo(int x, int y) {
    if (y <= 17) {
        setColor(14, 3);
    }
    else if (y > 17 && y <= 30) {
        if (y >= 18 && y <= 19) setColor(14, 2);
        else if (y >= 20 && y <= 23) setColor(14, 8);
        else if (y == 27) setColor(14, 7);
        else if (y >= 28 && y <= 29) setColor(14, 0);
        else if (y >= 30 && y <= 31) setColor(14, 7);
    }
    else {
        setColor(14, 8);
    }

    gotoxy(x, y);
    cout << " ";
}

//################
//@    MAPA 3    @
//################

void borrarMoto(int x, int y) {
    gotoxy(x, y);
    cout << "       ";
    gotoxy(x, y + 1);
    cout << "       ";
    gotoxy(x, y + 2);
    cout << "       ";
}

void redibujarFondoMoto(int x, int y) {
    setColor(15, 8); 
    gotoxy(x, y); cout << "       "; 
    gotoxy(x, y + 1); cout << "          "; 
    gotoxy(x, y + 2); cout << "         "; 
    setColor(15, 8); 
}

void redibujarFondoMotoInvertida(int x, int y) {
    setColor(15, 8); 
    gotoxy(x, y); cout << "     "; 
    gotoxy(x, y + 1); cout << "         "; 
    gotoxy(x, y + 2); cout << "         "; 
    setColor(15, 8); 
}

void dibujarMotocicleta(int x, int y) {
    gotoxy(x, y); cout << "      ,";
    gotoxy(x, y + 1); cout << "::,.-c\\-.-";
    gotoxy(x, y + 2); cout << "(_)=='(_)";
}

void dibujarMotocicletaInvertida(int x, int y) {
    gotoxy(x, y); cout << "   ,";
    gotoxy(x, y + 1); cout << ".-/c-.,::";
    gotoxy(x, y + 2); cout << "(_)'==(_)";
}