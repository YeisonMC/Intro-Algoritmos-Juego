#pragma once
#include "global.h"
#include "aliados.h"
#include "mapa02.h"
#include "gameover.h"
#include "youwin.h"

bool juegoTerminado = false;
const int numMotos = 2;  
int motoX[numMotos] = { 2, 2 }; // Posiciones iniciales X de las motocicletas
int motoY[numMotos] = { 31, 35 }; // Posiciones iniciales Y de las motocicletas
int puntosObjetivo[numMotos] = { 34, 22 }; // Puntos objetivo para cada motocicleta

const int numMotosInversas = 2; 
int motoInversaX[numMotosInversas] = { 148, 148 }; // Posiciones iniciales X
int motoInversaY[numMotosInversas] = { 20, 24 }; // Posiciones iniciales Y
int puntosObjetivoInversas[numMotosInversas] = { 83, 67 }; // Puntos objetivo para motocicletas inversas

int monedasRecolectadas = 0;
bool monedasRecolectadasEstado[numMotos + numMotosInversas] = { false, false, false, false }; // Estado de monedas recolectadas
bool motosEnMeta[numMotos + numMotosInversas] = { false, false, false, false };


int vehiculosMeta = 0;

void restaurarPistas() {
    // Restaurar pista derecha (x=138)
    for (int y = 31; y <= 37; y++) {
        gotoxy(138, y);
        setColor(8, 8); // Gris oscuro
        cout << " ";
        gotoxy(137, y);
        setColor(8, 8); // Gris oscuro
        cout << " ";
    }

    // Restaurar pista izquierda (x=22 y x=23)
    for (int y = 20; y <= 26; y++) {
        gotoxy(21, y);
        setColor(8, 8); // Gris oscuro
        cout << " ";
        gotoxy(22, y);
        setColor(8, 8); // Gris oscuro
        cout << " ";
    }
    setColor(15, 0); // Restaurar a blanco por defecto
}

void borrarEnemigos() {
    // Borrar enemigo de la derecha
    for (int y = 31; y <= 37; y++) {
        gotoxy(143, y); // Posición derecha
        setColor(8, 8); // Fondo gris oscuro
        cout << "   ";
        gotoxy(142, y); // Posición derecha
        setColor(8, 8); // Fondo gris oscuro
        cout << "   ";
        gotoxy(141, y); // Posición derecha
        setColor(8, 8); // Fondo gris oscuro
        cout << "   ";
    }

    // Borrar enemigo de la izquierda
    for (int y = 23; y <= 26; y++) {
        gotoxy(16, y);
        setColor(8, 8);
        cout << "   ";
        gotoxy(17, y); 
        setColor(8, 8); 
        cout << "   ";
        gotoxy(18, y);
        setColor(8, 8);
        cout << "   ";
    }

    setColor(15, 0); // Restaurar el color blanco
}

void verificarMonedasRecolectadas() {
    gotoxy(130, 10);
    setColor(15, 0);
    cout << "Monedas obtenidas: " << monedasRecolectadas << " / 4";
    setColor(2, 0); // Verde
    if (monedasRecolectadas == 4) {
        gotoxy(60, 28);
        setColor(2, 0); // Verde
        cout << "Tienes todas las monedas. Las pistas se han reparado!" << endl;
        gotoxy(60, 29);
        cout << "           Ahora sigue el camino para ganar           " << endl;
        setColor(15, 0);
        restaurarPistas();
        borrarEnemigos();
    }
}

// Función para hacer que un símbolo caiga desde una posición específica
void lanzarSimbolo(int xInicio, int yInicio, int yDestino) {
    int xSimbolo = xInicio;
    int ySimbolo = yInicio;

    while (ySimbolo < yDestino) {
        restaurarFondo(xSimbolo, ySimbolo);
        ySimbolo++;
        dibujarSimbolo(xSimbolo, ySimbolo);
        Sleep(100); 
    }
}

void verificarLlegadaMeta(int index, int x, int y, bool isInversa) {
    // Verificar si el vehículo llegó a la meta desde la derecha
    setColor(15, 0);
    if (!isInversa && x == 135 && y >= 31 && y <= 37 && !motosEnMeta[index]) {
        vehiculosMeta++;
        motosEnMeta[index] = true; 
        gotoxy(130, 14);
        cout << "Llegados a la meta: " << vehiculosMeta << " / 4" << endl;
    }
    // Verificar si el vehículo llegó a la meta desde la izquierda
    else if (isInversa && x == 5 && y >= 20 && y <= 28 && !motosEnMeta[numMotos + index]) {
        vehiculosMeta++;
        motosEnMeta[numMotos + index] = true; 
        gotoxy(130, 14);
        cout << "Llegados a la meta: " << vehiculosMeta << " / 4" << endl;
    }
    if (vehiculosMeta == 4) {
        Sleep(800);
        system("cls");
        mostrarYouWind();
        juegoTerminado = true;
    }
}

void movimientoHelicoptero() {
    mostarNivel2();
    yHelicoptero = 0; // Posición en la parte superior de la pantalla
    xHelicoptero = 20; // Posición inicial en X para que empiece cerca del borde izquierdo

    // Movimiento hacia abajo en la pantalla
    while (yHelicoptero < 6) { // Baja hasta la posición Y=6
        redibujarFondo(xHelicoptero, yHelicoptero); 
        yHelicoptero++; 
        dibujarHelicoptero(xHelicoptero, yHelicoptero); 
        Sleep(100); 
    }

    // Movimiento hacia la derecha en la pantalla, después de haber descendido
    while (xHelicoptero < COLUMNASMAPA02 - 48) {
        redibujarFondo(xHelicoptero, yHelicoptero);

        xHelicoptero++; 
        dibujarHelicoptero(xHelicoptero, yHelicoptero); 

        // Lanzar símbolos en posiciones específicas
        if (xHelicoptero == 24) {
            lanzarSimbolo(xHelicoptero + 7, yHelicoptero + 3, 36); // Primer símbolo
        }
        else if (xHelicoptero == 36) {
            lanzarSimbolo(xHelicoptero + 7, yHelicoptero + 3, 32); // Segundo símbolo
        }
        else if (xHelicoptero == 60) {
            lanzarSimbolo(xHelicoptero + 7, yHelicoptero + 3, 25); // Tercer símbolo
        }
        else if (xHelicoptero == 76) {
            lanzarSimbolo(xHelicoptero + 7, yHelicoptero + 3, 21); // Tercer símbolo
        }
        Sleep(40);  
    }
    borrarHelicoptero(xHelicoptero, yHelicoptero); 
    gotoxy(10, 38);
}


bool verificarColision(int x, int y) {
    // No hay colisión si ya se recolectaron todas las monedas
    if (monedasRecolectadas == 4) {
        return false;
    }

    // Comprobar si la posición (x, y) está en la zona peligrosa
    if (x == 127 && y >= 31 && y <= 37) {
        return true; 
    }
    return false;
}

bool verificarColisionIzquierda(int x, int y) {
    // No hay colisión si ya se recolectaron todas las monedas
    if (monedasRecolectadas == 4) {
        return false;
    }
    // Comprobar si la posición (x, y) está en la zona peligrosa
    if (x == 23 && y >= 20 && y <= 28) {
        return true; 
    }
    return false;
}

// Función para mover una motocicleta específica
void moverMotocicleta(int index) {
    bool jugando = true;

    // Dibujar la motocicleta seleccionada
    dibujarMotocicleta(motoX[index], motoY[index]);

    while (jugando) {
        if (_kbhit()) { 
            int tecla = tolower(_getch());

            // Borrar la posición actual de la motocicleta
            redibujarFondoMoto(motoX[index], motoY[index]);

            switch (tecla) {
            case 'a':
                motoX[index] = (motoX[index] > 0) ? motoX[index] - 1 : motoX[index]; break;

            case 'd':
                motoX[index] = (motoX[index] < COLUMNAS - 12) ? motoX[index] + 1 : motoX[index]; break;

            case 27: 
                jugando = false; break;
            }

            dibujarMotocicleta(motoX[index], motoY[index]);
        }

        // Verificar si el vehículo llegó a la meta
        if (motoX[index] == 135 && motoY[index] >= 31 && motoY[index] <= 37) {
            verificarLlegadaMeta(index, motoX[index], motoY[index], false);
        }

        // Verificar colisión solo si no se han recolectado todas las monedas
        // Dentro de moverMotocicleta o moverMotocicletaInversa
        if (verificarColision(motoX[index], motoY[index])) {
            gotoxy(60, 28);
            setColor(4, 0);
            cout << "Perdiste! La motocicleta ingresó en zona peligrosa." << endl;
            gotoxy(60, 29);
            setColor(0, 0);
            cout << "                                                   " << endl;
            jugando = false;
            juegoTerminado = true; // Actualizamos el estado del juego
            Sleep(1000);
            system("cls");
            mostrarGameOver();
            Sleep(2000);

        }

        // Verificar recolección de monedas
        if (motoX[index] == puntosObjetivo[index] && !monedasRecolectadasEstado[index]) {
            monedasRecolectadas++;
            monedasRecolectadasEstado[index] = true;
            verificarMonedasRecolectadas();
        }

        Sleep(50); 
    }
}

void moverMotocicletaInversa(int index) {
    bool jugando = true;

    // Dibujar la motocicleta seleccionada
    dibujarMotocicletaInvertida(motoInversaX[index], motoInversaY[index]);

    while (jugando) {
        if (_kbhit()) {
            int tecla = tolower(_getch());

            // Borrar la posición actual de la motocicleta
            redibujarFondoMotoInvertida(motoInversaX[index], motoInversaY[index]);

            switch (tecla) {
            case 'a': 
                motoInversaX[index] = (motoInversaX[index] > 0) ? motoInversaX[index] - 1 : motoInversaX[index];
                break;

            case 'd': 
                motoInversaX[index] = (motoInversaX[index] < COLUMNAS - 12) ? motoInversaX[index] + 1 : motoInversaX[index];
                break;

            case 27: 
                jugando = false;
                break;
            }

            // Dibujar la motocicleta en la nueva posición
            dibujarMotocicletaInvertida(motoInversaX[index], motoInversaY[index]);
        }

        // Verificar si el vehículo llegó a la meta
        if (motoInversaX[index] == 5 && motoInversaY[index] >= 20 && motoInversaY[index] <= 28) {
            verificarLlegadaMeta(index, motoInversaX[index], motoInversaY[index], true);
        }

        // Verificar colisión solo si no se han recolectado todas las monedas
        if (verificarColisionIzquierda(motoInversaX[index], motoInversaY[index])) {
            gotoxy(60, 28);
            setColor(4, 0);
            cout << "Perdiste! La motocicleta ingresó en zona peligrosa." << endl;
            gotoxy(60, 29);
            setColor(0, 0);
            cout << "                                                   " << endl;
            jugando = false;
            juegoTerminado = true;
            Sleep(1000);
            system("cls");
            mostrarGameOver();
            Sleep(2000);

        }

        // Verificar recolección de monedas
        if (motoInversaX[index] == puntosObjetivoInversas[index] && !monedasRecolectadasEstado[numMotos + index]) {
            monedasRecolectadas++;
            monedasRecolectadasEstado[numMotos + index] = true;
            verificarMonedasRecolectadas();
        }

        Sleep(50);
    }
}

void reiniciarJuego() {
    // Reiniciar posiciones de las motocicletas normales
    motoX[0] = 2; motoY[0] = 31;
    motoX[1] = 2; motoY[1] = 35;

    // Reiniciar posiciones de las motocicletas inversas
    motoInversaX[0] = 148; motoInversaY[0] = 20;
    motoInversaX[1] = 148; motoInversaY[1] = 24;

    // Reiniciar estado de las monedas
    monedasRecolectadas = 0;
    for (int i = 0; i < numMotos + numMotosInversas; i++) {
        monedasRecolectadasEstado[i] = false;
        motosEnMeta[i] = false; 
    }

    vehiculosMeta = 0;
    juegoTerminado = false;
    gotoxy(130, 10);
    cout << "                          ";
    gotoxy(130, 14);
    cout << "                          ";
}


// Controlador principal para las motocicletas
void manejarMotocicletas() {
    setColor(15, 8);
    for (int i = 0; i < numMotos; i++) {
        dibujarMotocicleta(motoX[i], motoY[i]);
    }

    for (int i = 0; i < numMotosInversas; i++) {
        dibujarMotocicletaInvertida(motoInversaX[i], motoInversaY[i]);
    }

    setColor(15, 0);
    mostrarMenuMotocicletas();

    bool seleccionando = true;
    while (seleccionando && !juegoTerminado) {
        if (_kbhit()) {
            int tecla = _getch();

            switch (tecla) {
            case '1':
                setColor(1, 8);
                moverMotocicletaInversa(0);
                if (juegoTerminado) return;
                mostrarMenuMotocicletas();
                break;

            case '2':
                setColor(1, 8);
                moverMotocicletaInversa(1);
                if (juegoTerminado) return;
                mostrarMenuMotocicletas();
                break;

            case '3':
                setColor(1, 8);
                moverMotocicleta(0);
                if (juegoTerminado) return;
                mostrarMenuMotocicletas();
                break;

            case '4':
                setColor(1, 8);
                moverMotocicleta(1);
                if (juegoTerminado) return;
                mostrarMenuMotocicletas();
                break;

            case 27:
                seleccionando = false;
                break;

            default:
                gotoxy(130, 12);
                cout << "Opción no válida.";
                Sleep(1000);
                gotoxy(130, 12);
                cout << "                 ";
                break;
            }
        }
    }
}