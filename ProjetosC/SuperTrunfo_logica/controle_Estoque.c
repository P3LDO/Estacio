#include <stdio.h>

int main() {

    float tempra, umi;
    unsigned int etq, etq_min = 1000;

    printf("Diga o valor da temperatuda: \n");
    scanf("%f", &tempra);
    printf("Diga qual a humidade do local: \n");
    scanf("%f", &umi);
    printf("Diga a quantidade do estoque: \n");
    scanf("%u", &etq);

    if (tempra > 30){
        printf("A temperatura esta muito alta ");
    } else {
        printf("A temperatura esta ideal ");
    }

    if (umi >50){
        printf("A humidade esta muito elevada ");
    } else {
        printf("A humidade esta ideal ");
    }

    if (etq < etq_min) {
        printf("o estoque esta abaixo do minimo ");
    } else {
        printf("O estoque e o suficiente ");
    }

    return 0;

}