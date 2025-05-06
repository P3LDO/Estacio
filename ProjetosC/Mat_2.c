#include <stdio.h>

int resultado, N1, N2;

int main() {

    N1 = 10;
    resultado = 10;
    printf("o valor que temos e : %d\n", resultado);

    resultado += 20;
    printf("o valor que temos e : %d\n", resultado);

    resultado -= N1;
    printf("o valor que temos e : %d\n", resultado);

    resultado /= 5;
    printf("o valor que temos e : %d \n", resultado);

    resultado *= 10;
    printf("o valor que temos e : %d \n", resultado);

    return 0;

}