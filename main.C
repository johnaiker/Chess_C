#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constantes
#define TAM_TABLERO 8
#define TIEMPO_MAXIMO 600 // 10 min en segundos

// Variables globales
char tablero[TAM_TABLERO][TAM_TABLERO];
int tiempo_restante = TIEMPO_MAXIMO;

// Funciones
void inicializar_tablero();
void imprimir_tablero();
// void mover_pieza();
// void actualizar_tiempo();
// int calcular_puntos(char);

int main() {
    // Inicializar tablero
    inicializar_tablero();
    printf("Tablero inicializado.\n");

    // Imprimir tablero
    imprimir_tablero();

    // Jugar partida
    // while (tiempo_restante > 0) {
    //     // mover_pieza();
    //     // actualizar_tiempo();
    // }

    // Fin de la partida
    printf("Tiempo agotado. Fin del juego.\n");
    // printf("Puntos del jugador blanco: %d\n", calcular_puntos('B'));
    // printf("Puntos del jugador negro: %d\n", calcular_puntos('N'));

    return 0;
}

void inicializar_tablero() {
    // 
    // Inicializar piezas negras
    tablero[0][0] = 'T';
    tablero[0][1] = 'C';
    tablero[0][2] = 'A';
    tablero[0][3] = 'Q';
    tablero[0][4] = 'K';
    tablero[0][5] = 'A';
    tablero[0][6] = 'C';
    tablero[0][7] = 'T';
    // tablero[0][0] = 'T';
    // tablero[0][1] = 'C';
    // tablero[0][2] = 'A';
    // tablero[0][3] = 'Q';
    // tablero[0][4] = 'K';
    // tablero[0][5] = 'A';
    // tablero[0][6] = 'C';
    // tablero[0][7] = 'T';
    for (int i=0; i<TAM_TABLERO; i++) {
        tablero[1][i] = 'P';
    }

    // Inicializar espacio vacío
    for (int i=2; i<6; i++) {
        for (int j=0; j<TAM_TABLERO; j++) {
            tablero[i][j] = ' ';
        }
    }

    // Inicializar piezas blancas
    for (int i=0; i<TAM_TABLERO; i++) {
        tablero[6][i] = 'P';
    }
    tablero[7][0] = 'T';
    tablero[7][1] = 'C';
    tablero[7][2] = 'A';
    tablero[7][3] = 'Q';
    tablero[7][4] = 'K';
    tablero[7][5] = 'A';
    tablero[7][6] = 'C';
    tablero[7][7] = 'T';
    // tablero[7][0] = 'T';
    // tablero[7][1] = 'C';
    // tablero[7][2] = 'A';
    // tablero[7][3] = 'Q';
    // tablero[7][4] = 'K';
    // tablero[7][5] = 'A';
    // tablero[7][6] = 'C';
    // tablero[7][7] = 'T';
}

void imprimir_tablero() {
    printf("  ");
    for (int i=0; i<TAM_TABLERO; i++) {
        printf("%c ", 'a'+i);
    }
    printf("\n");

    for (int i=0; i<TAM_TABLERO; i++) {
        printf("%d ", i+1);
        for (int j=0; j<TAM_TABLERO; j++) {
            printf("%c ", tablero[i][j]);
        }
        printf("%d", i+1);
        printf("\n");
    }

    printf("  ");
    for (int i=0; i<TAM_TABLERO; i++) {
        printf("%c ", 'a'+i);
    }
    printf("\n");
}

// void mover_pieza() {
//     // TODO: Implementar lógica de movimiento
// }

// void actualizar_tiempo() {
//     // Obtener tiempo actual
//     time_t tiempo_actual = time(NULL);

//     // Calcular tiempo transcurrido
//     int tiempo_transcurrido = tiempo_actual - tiempo_inicial;

//     // Actualizar tiempo restante
//     tiempo_restante = TIEMPO_MAXIMO - tiempo_transcurrido;

//     // Imprimir tiempo
//     int minutos = tiempo_restante / 60;
//     int segundos = tiempo_restante % 60;
//     printf("Tiempo restante: %02d:%02d\n", minutos, segundos);
// }

// int calcular_puntos(char jugador) {
//     int puntos = 0;

//     for (int i=0; i<TAM_TABLERO; i++) {
//         for (int j=0; j<TAM_TABLERO; j++) {
//             if (tablero[i][j] != ' ' && tablero[i][j] != jugador) {
//                 puntos += 1;
//             }
//         }
//     }

//     return puntos;
// }

// #include <stdio.h>

// // Estructura para representar una posición en el tablero
// typedef struct {
//     int row;
//     int col;
// } Position;

// // Función para validar si una posición está dentro del tablero
// int is_valid_position(Position pos) {
//     return pos.row >= 0 && pos.row < 8 && pos.col >= 0 && pos.col < 8;
// }

// // Función para validar si un movimiento es válido (para una pieza en particular)
// int is_valid_move(char piece, Position from, Position to) {
//     // Lógica para validar el movimiento de una pieza en particular
//     // ...
// }

// // Función para mover una pieza en el tablero
// void move_piece(char board[8][8], Position from, Position to) {
//     // Mover la pieza en el tablero
//     board[to.row][to.col] = board[from.row][from.col];
//     board[from.row][from.col] = ' ';
// }

// // Función principal del juego
// int main() {
//     // Inicializar el tablero
//     char board[8][8] = {
//         {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
//         {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
//         {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
//         {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
//         {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
//         {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
//         {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
//         {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
//     };

//     // Ejemplo de cómo mover una pieza
//     Position from = {1, 0}; // Peón blanco
//     Position to = {2, 0};
//     if (is_valid_move('P', from, to)) {
//         move_piece(board, from, to);
//     }

//     // TODO: Agregar lógica para imprimir el tablero, el tiempo de cada movimiento,
//     // el tiempo restante del juego y los puntos de cada jugador por piezas capturadas.
//     // También se pueden agregar características adicionales como guardar el juego o jugar contra la computadora.
    
//     return 0;
// }