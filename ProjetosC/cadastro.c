#include <stdio.h>

int main() {    
     int idade, matricula;
     float altura = 0;
     char nome[50] = "vazio";

    printf("Digite seu nome: \n");
    scanf("%S", &nome);
 
    printf ("Digite sua matricula: \n");
    scanf("%d", &matricula);   
    
    printf ("Digite sua idade: \n");
    scanf("%d", &idade);

    printf ("Digite sua altura: \n");
    scanf("%F", &altura);

    

    printf ("Nome de Aluno: %S - Matricula do Aluno: %d \n", &nome, &matricula);
    printf ("Idade do Aluno: %d - Altura do Aluno: %F", &idade, &altura);

    return 0;

}