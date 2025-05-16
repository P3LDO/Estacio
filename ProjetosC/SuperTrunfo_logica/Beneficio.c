#include <stdio.h>

int main() {

    int idade, renda;

    printf("Digite sua iadade: \n");
    scanf("%d", &idade);

    printf("Digite sua renda mensal\n");
    scanf("%d", &renda);

    if (idade < 18 || idade > 60)
    {
        if (renda < 3000)
        {
            printf("voce pode utilizar o beneficio!\n");
        } else {
            printf("Voce nao pode usar o beneficio por sua renda ser muito alta\n");
        }
        
    } else {

        printf("Voce nao pode usar o benefio pois sua idade nao esta entre 18 e 60");
    };

}