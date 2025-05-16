#include <stdio.h>

int main() {

    int idade, depe;
    float renda;

    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua renda: \n");
    scanf("%f", &renda);

    printf("Digite quantas pessoas dependem financeiramente de voce : \n");
    scanf("%d", &depe);

    if (idade >= 18 && idade < 65)
    {
        if (renda < 2500 )
        {
            if (depe >= 2)
            {
                printf("Voce pode receber o beneficio\n");
            } else {
                printf("Voce nao pode receber o beneficio por conta do numero de dependentes");
            }
            
        } else {
            printf("Voce nao pode receber o beneficio por conta de sua renda ser mais alta que o estimado");
        }
        
    } else {
        printf("voce nao pode receber o beneficio por sua idade nao estar entre 18 e 65");
    }
    
    return 0;
}