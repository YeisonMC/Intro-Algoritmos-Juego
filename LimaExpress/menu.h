#pragma once
#include "global.h"

void mostrar_menu(int opcion) {
    gotoxy(120, 16); cout << (opcion == 1 ? "-> " : "   ") << "1. Nivel 01" << endl;
    gotoxy(120, 18); cout << (opcion == 2 ? "-> " : "   ") << "2. Nivel 02" << endl;
    gotoxy(120, 20); cout << (opcion == 3 ? "-> " : "   ") << "2. Instrucciones" << endl;
    gotoxy(120, 22); cout << (opcion == 4 ? "-> " : "   ") << "3. Creditos" << endl;
    gotoxy(120, 24); cout << (opcion == 5 ? "-> " : "   ") << "4. Salir" << endl;
}

void mostarNivel2() {
    gotoxy(129, 2);
    setColor(4, 0);
    cout << "========= NIVEL 1 =========";
    setColor(15, 0);
}

void mostrarMenuMotocicletas() {
    setColor(15, 0);
    mostarNivel2();
    gotoxy(130, 4);
    cout << "Seleccione una motocicleta: ";
    gotoxy(130, 5);
    cout << "1. Motocicleta 1 ";
    gotoxy(130, 6);
    cout << "2. Motocicleta 2 ";
    gotoxy(130, 7);
    cout << "3. Motocicleta 3 ";
    gotoxy(130, 8);
    cout << "4. Motocicleta 4 ";
}
