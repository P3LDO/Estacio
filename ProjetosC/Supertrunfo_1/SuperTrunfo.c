#include <stdio.h>

int main (){

    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char Nome1[50], Nome2[50];
    int Turi1, Turi2; //pontos turisticos
    int Polp1, Polp2; //polpulação
    float Area1, Area2;
    float pib1, pib2;
    float pibcap1, pibcap2;
    float dens1, dens2;
    float Spoder1, Spoder2;
    float Dens1V, Dens2V;


        printf("==============================================================\n");
        printf("       incira a letra do primeiro estado (*de A a H):         \n");
        printf("==============================================================\n");
        scanf(" %c", &Estado1 );

        printf("==============================================================\n");
        printf("               agora escreva o codigo do estado:              \n");
        printf("==============================================================\n");
        scanf(" %s", Codigo1 );

        printf("==============================================================\n");
        printf("                agora escreva o nome do estado:               \n");
        printf("==============================================================\n");
        scanf("%s", Nome1 );

        printf("==============================================================\n");
        printf("   agora escreva o numero de pessoas que vive nesse estado:   \n");
        printf("==============================================================\n");
        scanf(" %d", &Polp1 );

        printf("==============================================================\n");
        printf("           agora escreva a area em m2 desse estado:           \n");
        printf("==============================================================\n");
        scanf(" %f", &Area1 );

        printf("==============================================================\n");
        printf("               agora escreva o PIB desse estado:              \n");
        printf("==============================================================\n");
        scanf(" %f", &pib1 );

        printf("==============================================================\n");
        printf("   agora escreva o numero de pontos turisticos do estado:     \n");
        printf("==============================================================\n");
        scanf(" %d", &Turi1 );

        dens1 = (float) Polp1 / Area1;

        pibcap1 = (float) Polp1 / pib1;
    

        printf("==============================================================\n");
        printf("Os dados da carta 1 sao: \n");
        printf("Estado: %c\n", Estado1); 
        printf("Codigo: %s\n", Codigo1);
        printf("Nome: %s\n", Nome1);
        printf("Polpulacao: %d\n", Polp1);
        printf("Area (M2): %.2f\n", Area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turisticos: %d\n", Turi1);
        printf("A densidade do estado: %.2f\n", dens1);
        printf("O pib per capita e: %.5f\n", pibcap1);
        printf("==============================================================\n");

        printf("==============================================================\n");
        printf("       incira a letra do segundo estado (*de A a H):         \n");
        printf("==============================================================\n");
        scanf(" %c", &Estado2 );

        printf("==============================================================\n");
        printf("               agora escreva o codigo do estado:              \n");
        printf("==============================================================\n");
        scanf("%s", Codigo2 );

        printf("==============================================================\n");
        printf("                agora escreva o nome do estado:               \n");
        printf("==============================================================\n");
        scanf("%s", Nome2 );

        printf("==============================================================\n");
        printf("   agora escreva numero de pessoas que vive nesse estado:     \n");
        printf("==============================================================\n");
        scanf("%d", &Polp2 );

        printf("==============================================================\n");
        printf("           agora escreva a area em m2 desse estado:           \n");
        printf("==============================================================\n");
        scanf("%f", &Area2 );

        printf("==============================================================\n");
        printf("               agora escreva o PIB desse estado:              \n");
        printf("==============================================================\n");
        scanf("%f", &pib2 );

        printf("==============================================================\n");
        printf("   agora escreva o numero de pontos turisticos do estado:     \n");
        printf("==============================================================\n");
        scanf("%d", &Turi2 );

        dens2 = (float) Polp2 / Area2;

        pibcap2 = (float) Polp2 / pib2;

        printf("==============================================================\n");
        printf("Os dados da carta 2 sao: \n");
        printf("Estado: %c\n", Estado2); 
        printf("Codigo: %s\n", Codigo2);
        printf("Nome: %s\n", Nome2);
        printf("Polpulacao: %d\n", Polp2);
        printf("Area (M2): %.2f\n", Area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turisticos: %d\n", Turi2);
        printf("A densidade do estado: %.2f\n", dens2);
        printf("O pib per capita e: %.5f\n", pibcap2);
        printf("==============================================================\n");

        Dens1V = 1 / dens1;

        Spoder1 = Polp1 + pib1 + pibcap1 + Dens1V;

        Dens2V = 1 / dens2;

        Spoder2 = Polp2 + pib2 + pibcap2 + Dens2V;

        printf("==============================================================\n");
        printf("AGORA VEREMOS QUAL CARTA TEM MAIS PONTOS \n");
        printf("SE O RESULDATO FOR 1 A PRIMEIRA CARTA VENCEU\n");
        printf("SE O RESULTADO FOR 0 A SEGUNDA CARTA VENCEU \n");
        printf("==============================================================\n");
        printf("o vencedor do PIB foi %d\n", pib1 > pib2);
        printf("o vencedor do PIB per capta foi %d\n", pibcap1 >pibcap2);
        printf("o vencedor com a maior polpulacao foi %d\n", Polp1 > Polp2);
        printf("o vencedor de maior estado foi %d\n", Area1 > Area2);
        printf("o vencedor de mais pontos turisticos foi %d\n", Turi1 > Turi2);
        printf("e a carta com o maior poder e %d\n", Spoder1 > Spoder2);
        printf("==============================================================\n");

  
    return 0;
}