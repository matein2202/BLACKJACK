#define Maximo 100
#define maximo_jugadores 4




struct jugador {
    char nombre[Maximo];
    int puntos;
};
struct jugador jugadores[maximo_jugadores];

void menu();
void jugarPartida();
void cargarPartidas();