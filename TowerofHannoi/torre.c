#include <stdio.h>

// Función recursiva para mover los discos
void hanoi(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    hanoi(n - 1, origen, auxiliar, destino);
    printf("Mover disco %d de %c a %c\n", n, origen, destino);
    hanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int numDiscos;
    
    printf("Introduce el número de discos: ");
    scanf("%d", &numDiscos);
    
    // Llamada inicial para resolver el problema
    hanoi(numDiscos, 'A', 'C', 'B');
    
    return 0;
}