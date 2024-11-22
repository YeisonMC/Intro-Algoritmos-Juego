#pragma once
#include "iostream"
#include <Windows.h>
#include <conio.h>
#include <thread>
#include <chrono>
#include <string>

using namespace System;
using namespace std;


#define TECLA_ESC 27

int const FILAS = 40;
int const COLUMNAS = 159;

void cursor(int x, int y) {
    Console::SetCursorPosition(x, y);
}

void TextoLento(const string& texto, int velocidad) {
    for (char c : texto) {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(velocidad));
    }
    cout << endl;
}

void ventana(int w, int h) {
    Console::SetWindowSize(w, h);
}

//void setColor(int textColor, int backgroundColor = 0) {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    int color = (backgroundColor << 4) | textColor; 
//    SetConsoleTextAttribute(hConsole, color);
//}

void setColor(int textColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

void esperar_esc() {
    cout << "\nPresiona ESC para volver al menu...";
    while (_getch() != 27);
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
