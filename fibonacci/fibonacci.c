#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
       
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Introduce un número para calcular el término de Fibonacci: ");
    scanf("%d", &n);
    
  
    printf("El término %d de la secuencia de Fibonacci es: %d\n", n, fibonacci(n));

    return 0;
}