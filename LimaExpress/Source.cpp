#include "global.h"
#include "menu.h"
#include "presentacion.h"
#include "mapa01.h"
#include "juegomapa01.h"
#include "gameover.h"
#include "youwin.h"
#include "mapa02.h"
#include "juegomapa02.h"
#include "enemigos.h"
#include "aliados.h"
#include "protagonistas.h"
#include "creditos.h"
#include "instrucciones.h"

void iniciarJuego() {
    juegoTerminado = false;
    reiniciarJuego();
    system("cls");
    mostrarMapa02();

    movimientoHelicoptero();
    moverEnemigo();
    moverEnemigoIzquierda();
    Sleep(800);

    manejarMotocicletas();
}
int main() {
    Random r;
    ventana(160, 40);
    int p = 0;

    int xAuto = 5; // Posición inicial en X
    int yAuto = 29;
    int xAuto2 = 5;
    int yAuto2 = 9;
    int xAuto3 = 5;
    int yAuto3 = 13;
    int xAuto4 = 5;
    int yAuto4 = 25;
    int x1Persona = 63; // Posicion dinicial del Enemigo
    int y1Persona = 36;
    int x1Persona2 = r.Next(40, 90); // Posicion que seguira el Enemigo
    int x2Persona = 63; // Posicion dinicial del Enemigo
    int y2Persona = 0;
    int x2Persona2 = r.Next(40, 90);
    int xGato = 63;
    int yGato = 36;
    int Limite = 0;
    bool Persona1 = false; // Cantidad personas recogidas
    bool Persona2 = false;
    bool completado = true;
    bool ganar = true;
    bool Auto1 = true;
    bool Auto2 = true;

	bool repite = true;
	int opcion = 1;
	const int TOTAL_OPCIONES = 5;

    presentacion();
    mostrar_menu(opcion);

    do {
        int tecla = _getch();

        switch (tecla) {
        case 72:
            opcion = (opcion == 1) ? TOTAL_OPCIONES : opcion - 1;
            break;
        case 80:
            opcion = (opcion == TOTAL_OPCIONES) ? 1 : opcion + 1;
            break;
        case 13:
            system("cls");
            switch (opcion) {
            case 1:
                iniciarJuego();
                break;
            case 2:
                mostrarMapa01();
                setColor(2, 15);
                gotoxy(124, 1); cout << "========= NIVEL 2 =========";
                for (int i = 0; i + 40 < COLUMNAS; i++) {
                    for (int j = 0; j < COLUMNAS; j++) {
                        setColor(7, 8);
                        gotoxy(j, 11); cout << "=";
                    }

                    setColor(4, 8);
                    gotoxy(i, 8); cout << "  _____ _______       _____ _______ ";
                    gotoxy(i, 9); cout << " / ____|__   __|/\\   |  __ \\__   __|";
                    gotoxy(i, 10); cout << "| (___    | |  /  \\  | |__) | | |   ";
                    gotoxy(i, 11); cout << " \\___ \\   | | / /\\ \\ |  _  /  | |   ";
                    gotoxy(i, 12); cout << " ____) |  | |/ ____ \\| | \\ \\  | |   ";
                    gotoxy(i, 13); cout << "|_____/   |_/_/    \\_\\_|  \\_\\ |_|   ";

                    Sleep(20);
                    gotoxy(i, 8); cout << "                                      ";
                    gotoxy(i, 9); cout << "                                      ";
                    gotoxy(i, 10); cout << "                                     ";
                    gotoxy(i, 11); cout << "                                     ";
                    gotoxy(i, 12); cout << "                                     ";
                    gotoxy(i, 13); cout << "                                     ";
                    gotoxy(i, 13); cout << "                                     ";
                }

                for (int j = 0; j < COLUMNAS; j++) {
                    setColor(7, 8);
                    gotoxy(j, 11); cout << "=";
                }

                do {
                    setColor(4, 8);
                    gotoxy(63, 35); cout << "^ ALERTA ^";
                    gotoxy(63, 36); cout << "| ------ |";
                    gotoxy(63, 4); cout << "| ALERTA |";
                    gotoxy(63, 5); cout << "v ------ v";
                    Sleep(500);
                    gotoxy(63, 35); cout << "          ";
                    gotoxy(63, 36); cout << "          ";
                    gotoxy(63, 4); cout << "          ";
                    gotoxy(63, 5); cout << "          ";
                    Sleep(500);
                    p += 1;
                } while (p != 3);
                p = 0;

                // Primer movimiento de los Enemigos
                while (y1Persona != 28) {
                    setColor(0, 8);
                    gotoxy(x1Persona, y1Persona);
                    cout << "    ";
                    gotoxy(x1Persona, y1Persona + 1);
                    cout << "    ";
                    gotoxy(x1Persona, y1Persona + 2);
                    cout << "    ";

                    y1Persona--;
                    dibujarYeissen(x1Persona, y1Persona);
                    gotoxy(x1Persona, y1Persona);
                    Sleep(100);
                }

                while (y2Persona != 8) {
                    setColor(0, 8);
                    gotoxy(x2Persona, y2Persona);
                    cout << "    ";
                    gotoxy(x2Persona, y2Persona + 1);
                    cout << "    ";
                    gotoxy(x2Persona, y2Persona + 2);
                    cout << "    ";

                    y2Persona++;
                    dibujarYeissen(x2Persona, y2Persona);
                    gotoxy(x2Persona, y2Persona);
                    Sleep(100);
                }

                // Movimiento de las personas a casilla aleatoria
                // Persona 1
                if (x1Persona2 > x1Persona) {
                    do {
                        setColor(0, 8);
                        gotoxy(x1Persona, y1Persona);
                        cout << "   ";
                        gotoxy(x1Persona, y1Persona + 1);
                        cout << "   ";
                        gotoxy(x1Persona, y1Persona + 2);
                        cout << "   ";
                        x1Persona++;
                        dibujarYeissen(x1Persona, y1Persona);
                        Sleep(100);
                    } while (x1Persona != x1Persona2);
                }
                else if (x1Persona2 < x1Persona) {
                    do {
                        setColor(0, 8);
                        gotoxy(x1Persona, y1Persona);
                        cout << "   ";
                        gotoxy(x1Persona, y1Persona + 1);
                        cout << "   ";
                        gotoxy(x1Persona, y1Persona + 2);
                        cout << "   ";
                        x1Persona--;
                        dibujarYeissen(x1Persona, y1Persona);
                        Sleep(100);
                    } while (x1Persona != x1Persona2);

                }
                else {
                    dibujarYeissen(x1Persona, y1Persona);
                    gotoxy(x1Persona, y1Persona);
                }

                // Persona 2
                if (x2Persona2 > x2Persona) {
                    do {
                        setColor(0, 8);
                        gotoxy(x2Persona, y2Persona);
                        cout << "   ";
                        gotoxy(x2Persona, y2Persona + 1);
                        cout << "   ";
                        gotoxy(x2Persona, y2Persona + 2);
                        cout << "   ";
                        x2Persona++;
                        dibujarYeissen(x2Persona, y2Persona);
                        Sleep(100);
                    } while (x2Persona != x2Persona2);
                }
                else if (x2Persona2 < x2Persona) {
                    do {
                        setColor(0, 8);
                        gotoxy(x2Persona, y2Persona);
                        cout << "   ";
                        gotoxy(x2Persona, y2Persona + 1);
                        cout << "   ";
                        gotoxy(x2Persona, y2Persona + 2);
                        cout << "   ";
                        x2Persona--;
                        dibujarYeissen(x2Persona, y2Persona);
                        Sleep(100);
                    } while (x2Persona != x2Persona2);

                }
                else {
                    dibujarYeissen(x2Persona, y2Persona);
                    gotoxy(x2Persona, y2Persona);
                }

                dibujarGato(xGato, yGato);
                setColor(2, 15);
                gotoxy(124, 2); cout << "Cantidad de Enemigos restante: " << (Persona1 == false) + (Persona2 == false);

                // Comienzo del Juego
                do {
                    setColor(7, 8);
                    for (int i = 0; i < COLUMNAS; i++) {
                        gotoxy(i, 27); cout << "=";
                    }
                    for (int i = 0; i < COLUMNAS; i++) {
                        gotoxy(i, 11); cout << "=";
                    }

                    // Funcion de los Auto
                    // Los autos avanzaran hasta una distancia de 5 pixeles del Enemigos

                    if (Auto1) {
                        if (xAuto + 20 != x1Persona2) {
                            setColor(4, 8);
                            gotoxy(xAuto, yAuto); cout << "             ";
                            xAuto++;  // Incrementa la posición en X para mover el auto
                            dibujarAuto(xAuto, yAuto);
                        }

                        if (xAuto + 15 >= COLUMNAS) {
                            setColor(4, 8);
                            gotoxy(xAuto, yAuto); cout << "            ";
                            gotoxy(xAuto, yAuto + 1); cout << "            ";
                            Auto1 = false; // Cancelar Movimientos del carro
                        }
                    }

                    if (Auto2) {
                        if (xAuto2 + 20 != x2Persona2) {
                            setColor(4, 8);
                            gotoxy(xAuto2, yAuto2); cout << "             ";
                            xAuto2++;
                            dibujarAuto(xAuto2, yAuto2);
                        }

                        if (xAuto2 + 15 >= COLUMNAS) {
                            setColor(4, 8);
                            gotoxy(xAuto2, yAuto2); cout << "            ";
                            gotoxy(xAuto2, yAuto2 + 1); cout << "            ";
                            Auto2 = false;
                        }
                    }

                    setColor(4, 8);
                    gotoxy(xAuto3, yAuto3); cout << "             ";
                    xAuto3 += r.Next(1, 3);  // Incrementa la posición en X para mover el auto de manera aleatoria 1-2-3
                    dibujarAuto(xAuto3, yAuto3);
                    Sleep(30);
                    if (xAuto3 + 15 >= COLUMNAS) {
                        gotoxy(xAuto3, yAuto3); cout << "             ";
                        gotoxy(xAuto3, yAuto3 + 1); cout << "             ";
                        xAuto3 = 5; // Reiniciar posicion al inicio
                    }

                    gotoxy(xAuto4, yAuto4); cout << "             ";
                    xAuto4 += r.Next(1, 3);
                    dibujarAuto(xAuto4, yAuto4);
                    Sleep(30);
                    if (xAuto4 + 15 >= COLUMNAS) {
                        gotoxy(xAuto4, yAuto4); cout << "             ";
                        gotoxy(xAuto4, yAuto4 + 1); cout << "             ";
                        xAuto4 = 5;
                    }

                    // Movimientos del gato
                    tecla = _getch();

                    setColor(0, 8);
                    borrar(xGato, yGato);
                    switch (tecla) {
                    case 119:  // Flecha abajo
                        yGato--;
                        break;
                    case 115:  // Flecha arriba
                        yGato++;
                        break;
                    case 97:  // Flecha izquierda
                        xGato--;
                        break;
                    case 100:  // Flecha derecha
                        xGato++;
                        break;
                    }


                    // Limites del gato
                    if (yGato == 0) {
                        yGato++;
                    }
                    if (yGato + 2 == 39) {
                        yGato--;
                    }

                    if (xGato <= 57) {
                        if (yGato + 2 == 32 || yGato + 2 == 16) {
                            yGato--;
                            Limite = 1;
                        }
                        else if (yGato == 22 || yGato == 6) {
                            yGato++;
                            Limite = 1;
                        }
                        else if (yGato <= 6) {
                            xGato++;
                            Limite = 1;
                        }
                        else if (yGato < 22 && yGato + 2 > 16) {
                            xGato++;
                            Limite = 1;
                        }
                        else if (yGato + 2 > 32) {
                            xGato++;
                            Limite = 1;
                        }
                    }

                    if (xGato + 5 >= 79 && xGato < 89) {
                        if (yGato + 2 == 32 || yGato + 2 == 16) {
                            yGato--;
                            Limite = 1;
                        }
                        else if (yGato == 22 || yGato == 6) {
                            yGato++;
                            Limite = 1;
                        }
                        else if (yGato <= 6) {
                            xGato--;
                            Limite = 1;
                        }
                        else if (yGato < 22 && yGato + 2 > 16) {
                            xGato--;
                            Limite = 1;
                        }
                        else if (yGato + 2 > 32) {
                            xGato--;
                            Limite = 1;
                        }
                    }

                    if (xGato == 89) {
                        if (yGato + 2 == 32 || yGato + 2 == 16) {
                            yGato--;
                            Limite = 1;
                        }
                        else if (yGato == 22 || yGato == 6) {
                            yGato++;
                            Limite = 1;
                        }
                        else if (yGato <= 6) {
                            xGato++;
                            Limite = 1;
                        }
                        else if (yGato < 22 && yGato + 2 > 16) {
                            xGato++;
                            Limite = 1;
                        }
                        else if (yGato + 2 > 32) {
                            xGato++;
                            Limite = 1;
                        }
                    }

                    if (xGato + 5 >= 112) {
                        if (yGato + 2 == 32 || yGato + 2 == 16) {
                            yGato--;
                            Limite = 1;
                        }
                        else if (yGato == 22 || yGato == 6) {
                            yGato++;
                            Limite = 1;
                        }
                        else if (yGato <= 6) {
                            xGato--;
                            Limite = 1;
                        }
                        else if (yGato < 22 && yGato + 2 > 16) {
                            xGato--;
                            Limite = 1;
                        }
                        else if (yGato + 2 > 32) {
                            xGato--;
                            Limite = 1;
                        }
                    }

                    if (Limite == 1)
                        setColor(0, 12);

                    dibujarGato(xGato, yGato);
                    Limite = 0;

                    // Condiciones para ganar
                    if (Persona1 == false) {
                        for (int i = 0; i < 5; i++) {
                            for (int y = 0; y <= 3; y++) {
                                for (int x = 0; x <= 3; x++) {
                                    if (xGato + i == x1Persona + x && yGato + y == y1Persona + x) {
                                        borrar(x1Persona, y1Persona);
                                        x1Persona2 = 0;
                                        Persona1 = true;
                                    }
                                }
                            }
                        }
                    }

                    if (Persona2 == false) {
                        for (int i = 0; i < 5; i++) {
                            for (int y = 0; y <= 3; y++) {
                                for (int x = 0; x <= 3; x++) {
                                    if (xGato + i == x2Persona + x && yGato + y == y2Persona + x) {
                                        borrar(x2Persona, y2Persona);
                                        x2Persona2 = 0;
                                        Persona2 = true;
                                    }
                                }
                            }
                        }
                    }

                    // Condicion para perder
                    for (int i = 0; i < 5; i++) {
                        for (int y = 0; y <= 3; y++) {
                            for (int x = 0; x <= 12; x++) {
                                for (int w = 0; w <= 2; w++) {
                                    if (xGato + i == xAuto + x && yGato + y == yAuto + w) {
                                        completado = false;
                                        ganar = false;
                                    }
                                }
                            }
                        }
                    }

                    for (int i = 0; i < 5; i++) {
                        for (int y = 0; y <= 3; y++) {
                            for (int x = 0; x <= 12; x++) {
                                for (int w = 0; w <= 2; w++) {
                                    if (xGato + i == xAuto2 + x && yGato + y == yAuto2 + w) {
                                        completado = false;
                                        ganar = false;
                                    }
                                }
                            }
                        }
                    }

                    for (int i = 0; i < 5; i++) {
                        for (int y = 0; y <= 3; y++) {
                            for (int x = 0; x <= 12; x++) {
                                for (int w = 0; w <= 2; w++) {
                                    if (xGato + i == xAuto3 + x && yGato + y == yAuto3 + w) {
                                        completado = false;
                                        ganar = false;
                                    }
                                }
                            }
                        }
                    }

                    for (int i = 0; i < 5; i++) {
                        for (int y = 0; y <= 3; y++) {
                            for (int x = 0; x <= 12; x++) {
                                for (int w = 0; w <= 2; w++) {
                                    if (xGato + i == xAuto4 + x && yGato + y == yAuto4 + w) {
                                        completado = false;
                                        ganar = false;
                                    }
                                }
                            }
                        }
                    }

                    if (Persona1 && Persona2) {
                        ganar = true;
                        completado = false;
                    }

                    // Tablero
                    setColor(2, 15);
                    gotoxy(124, 1); cout << "========= NIVEL 2 =========";
                    gotoxy(124, 2); cout << "Cantidad de Enemigos restante: " << (Persona1 == false) + (Persona2 == false);


                } while (completado);

                if (ganar) {
                    for (int j = 0; j <= 3; j++) {
                        setColor(7, 8);
                        dibujarGato(xGato, yGato);
                        Sleep(500);
                        setColor(9, 8);
                        dibujarGato(xGato, yGato);
                        Sleep(500);
                    }
                    system("cls");
                    mostrarYouWind();
                }
                else {
                    for (int j = 0; j <= 3; j++) {
                        setColor(7, 8);
                        dibujarGato(xGato, yGato);
                        Sleep(500);
                        setColor(12, 8);
                        dibujarGato(xGato, yGato);
                        Sleep(500);
                    }
                    system("cls");
                    mostrarGameOver();
                }

                if (_kbhit()) {
                    int tecla = _getch();
                    if (tecla == 27) break;
                }

                // Valores original
                xAuto = 5; // Posición inicial en X
                yAuto = 29;
                xAuto2 = 5;
                yAuto2 = 9;
                xAuto3 = 5;
                yAuto3 = 13;
                xAuto4 = 5;
                yAuto4 = 25;
                x1Persona = 63; // Posicion dinicial del Enemigo
                y1Persona = 36;
                x1Persona2 = r.Next(40, 90); // Posicion que seguira el Enemigo
                x2Persona = 63; // Posicion dinicial del Enemigo
                y2Persona = 0;
                x2Persona2 = r.Next(40, 90);
                xGato = 63;
                yGato = 36;
                Limite = 0;
                Persona1 = false; // Cantidad personas recogidas
                Persona2 = false;
                completado = true;
                ganar = true;
                Auto1 = true;
                Auto2 = true;
                gotoxy(10, 38);
                esperar_esc();
                break;

            case 3:
                Instrucciones();
                break;

            case 4:
                matrixCreditos();
                esperar_esc();
                break;

            case 5:
                cout << "Saliendo..." << endl;
                repite = false;
                break;
            }

            if (repite) {
                system("cls");
                presentacion();
            }
            mostrar_menu(opcion);
            break;
        }
        mostrar_menu(opcion);
    } while (repite);

    return 0;
}