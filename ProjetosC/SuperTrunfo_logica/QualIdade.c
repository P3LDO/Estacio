#include <stdio.h>

int main () {

int idade;

printf("Digite sua idade :\n");
scanf("%d", &idade);

if (idade >= 60)
{
    printf("Voce esta bem velho hein kkkkk com %d anos", idade);

} else if (idade >= 40)
{
    printf("Voce esta ficando velho, ta com %d anos", idade);

} else if (idade >= 19)
{
    printf("Voce esta na meia idade, com %d anos", idade);
};

return 0;
} 