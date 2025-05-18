#include <stdio.h>

int main (){

    char Codigo1[4], Codigo2[4];
    char Nome1[50], Nome2[50];
    int Turi1, Turi2, Polp1, Polp2, OP, pts1 ,pts2;
    float Area1, Area2, pib1, pib2, pibcap1, pibcap2, dens1, dens2, Spoder1, Spoder2, Dens1V, Dens2V;

    pts1 = pts2 = 0;

        printf("==============================================================\n");
        printf("               agora escreva o codigo do estado:              \n");
        printf("==============================================================\n");
        scanf(" %s", Codigo1 );

        printf("==============================================================\n");
        printf("                agora escreva o nome do estado:               \n");
        printf("==============================================================\n");
        scanf(" %s", Nome1 );

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

        pibcap1 = pib1 / (float) Polp1 ;
    

        printf("==============================================================\n");
        printf("Os dados da carta 1 sao: \n");
        printf("Codigo: %s\n", Codigo1);
        printf("Nome: %s\n", Nome1);
        printf("Populacao: %d\n", Polp1);
        printf("Area (M2): %.2f\n", Area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turisticos: %d\n", Turi1);
        printf("A densidade do estado: %.2f\n", dens1);
        printf("O pib per capita e: %.2f\n", pibcap1);
        printf("==============================================================\n");

        printf("==============================================================\n");
        printf("               agora escreva o codigo do estado 2:            \n");
        printf("==============================================================\n");
        scanf(" %s", Codigo2 );

        printf("==============================================================\n");
        printf("               agora escreva o nome do estado 2:              \n");
        printf("==============================================================\n");
        scanf(" %s", Nome2 );

        printf("==============================================================\n");
        printf("  agora escreva numero de pessoas que vive nesse estado 2:    \n");
        printf("==============================================================\n");
        scanf(" %d", &Polp2 );

        printf("==============================================================\n");
        printf("          agora escreva a area em m2 desse estado 2:          \n");
        printf("==============================================================\n");
        scanf(" %f", &Area2 );

        printf("==============================================================\n");
        printf("              agora escreva o PIB desse estado 2:             \n");
        printf("==============================================================\n");
        scanf(" %f", &pib2 );

        printf("==============================================================\n");
        printf("  agora escreva o numero de pontos turisticos do estado 2:    \n");
        printf("==============================================================\n");
        scanf(" %d", &Turi2 );

        dens2 = (float) Polp2 / Area2;

        pibcap2 = pib2 / (float) Polp2 ;

        printf("==============================================================\n");
        printf("Os dados da carta 2 sao: \n");
        printf("Codigo: %s\n", Codigo2);
        printf("Nome: %s\n", Nome2);
        printf("Populacao: %d\n", Polp2);
        printf("Area (M2): %.2f\n", Area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turisticos: %d\n", Turi2);
        printf("A densidade do estado: %.2f\n", dens2);
        printf("O pib per capita e: %.2f\n", pibcap2);
        printf("==============================================================\n");

        Dens1V = 1 / dens1;

        Spoder1 = Polp1 + pib1 + pibcap1 + Dens1V;

        Dens2V = 1 / dens2;

        Spoder2 = Polp2 + pib2 + pibcap2 + Dens2V;

        printf("==============================================================\n");
        printf("ROUND 1\n");
        printf("AGORA VEREMOS QUAL CARTA TEM MAIS PONTOS \n");
        printf("DIGITE O NUMERO PRA VER QUEM VENCEU NESSA CATEGORIA\n");
        printf("==============================================================\n");
        printf("1. para comparar o pib\n");
        printf("2. para comparar a populacao\n");
        printf("3. para comparar a Area\n");
        printf("4. para comparar os Pontos Turisticos\n");
        printf("5. para comparar a densidade\n");
        printf("6. para comparar o SUPER PODER\n");
        printf("==============================================================\n");
        scanf(" %d", &OP);
        printf("os paises na comparacao %s X %s\n", Nome1, Nome2);
        printf("==============================================================\n");
        
        //Escolha de qual estatus vai ser usado na comparação//

        switch (OP)
        {
        case 1:
            printf("Vamos comparar o PIB deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", pib1, pib2);
            if (pib1 > pib2)
            {
                printf("A carta 1 VENCEU com o maior pib com : %.2f\n", pib1);
                pts1++;
            } else if (pib1 < pib2)
            {
                printf("A carta 2 VENCEU com o maior pib com : %.2f\n", pib2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 2:
            printf("Vamos comparar a populacao deles\n");
            printf("Os pontos deles sao %d X %d\n", Polp1, Polp2);
            if (Polp1 > Polp2)
            {
                printf("A carta 1 VENCEU com a maior populacao : %d pessoas\n", Polp1);
                pts1++;
            } else if (Polp1 < Polp2)
            {
                printf("A carta 2 VENCEU com o maior populacao : %d\n", Polp2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 3:
            printf("Vamos comparar a Area deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", Area1, Area2);
            if (Area1 > Area2)
            {
                printf("A carta 1 VENCEU sendo o maior territorio com : %.2f\n", Area1);
                pts1++;
            } else if (Area1 < Area2)
            {
                printf("A carta 2 VENCEU sendo o maior territorio com : %.2f\n", Area2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 4:
            printf("Vamos comparar os pontos turisticos deles\n");
            printf("Os pontos deles sao %d X %d\n", Turi1, Turi2);
            if (Turi1 > Turi2)
            {
                printf("A carta 1 VENCEU tendo mais pontos turisticos com : %d\n", Turi1);
                pts1++;
            } else if (Turi1 < Turi2)
            {
                printf("A carta 2 VENCEU tendo mais pontos turisticos com : %d\n", Turi2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 5:
            printf("Vamos comparar os pontos a densidade deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", dens1, dens2);
            if (dens1 > dens2)
            {
                printf("A carta 1 VENCEU sendo a maior densidade com : %.2f\n", dens1);
                pts1++;
            } else if (dens1 < dens2)
            {
                printf("A carta 2 VENCEU sendo a maior densidade com : %.2f\n", dens2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 6:
            printf("Vamos comparar o SUPER PODER deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", Spoder1, Spoder2);
            if (Spoder1 > Spoder2)
            {
                printf("A carta 1 VENCEU com o maior PODER com : %.2f\n", Spoder1);
                pts1++;
            } else if (Spoder1 < Spoder2)
            {
                printf("A carta 2 VENCEU com o maior PODER com : %.2f\n", Spoder2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;

        default:

            printf("Voce nao selecionou uma opcao valida\n");
            break;
        };
        printf("==============================================================\n");
        printf("ROUND 2\n");
        printf("AGORA VEREMOS QUAL CARTA TEM MAIS PONTOS \n");
        printf("DIGITE O NUMERO PRA VER QUEM VENCEU NESSA CATEGORIA\n");
        printf("==============================================================\n");
        printf("1. para comparar o pib\n");
        printf("2. para comparar a populacao\n");
        printf("3. para comparar a Area\n");
        printf("4. para comparar os Pontos Turisticos\n");
        printf("5. para comparar a densidade\n");
        printf("6. para comparar o SUPER PODER\n");
        printf("==============================================================\n");
        scanf(" %d", &OP);
        printf("os paises na comparacao %s X %s\n", Nome1, Nome2);
        printf("==============================================================\n");
        
        //Escolha de qual estatus vai ser usado na comparação//

        switch (OP)
        {
        case 1:
            printf("Vamos comparar o PIB deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", pib1, pib2);
            if (pib1 > pib2)
            {
                printf("A carta 1 VENCEU com o maior pib com : %.2f\n", pib1);
                pts1++;
            } else if (pib1 < pib2)
            {
                printf("A carta 2 VENCEU com o maior pib com : %.2f\n", pib2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 2:
            printf("Vamos comparar a populacao deles\n");
            printf("Os pontos deles sao %d X %d\n", Polp1, Polp2);
            if (Polp1 > Polp2)
            {
                printf("A carta 1 VENCEU com a maior populacao : %d pessoas\n", Polp1);
                pts1++;
            } else if (Polp1 < Polp2)
            {
                printf("A carta 2 VENCEU com o maior populacao : %d\n", Polp2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 3:
            printf("Vamos comparar a Area deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", Area1, Area2);
            if (Area1 > Area2)
            {
                printf("A carta 1 VENCEU sendo o maior territorio com : %.2f\n", Area1);
                pts1++;
            } else if (Area1 < Area2)
            {
                printf("A carta 2 VENCEU sendo o maior territorio com : %.2f\n", Area2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 4:
            printf("Vamos comparar os pontos turisticos deles\n");
            printf("Os pontos deles sao %d X %d\n", Turi1, Turi2);
            if (Turi1 > Turi2)
            {
                printf("A carta 1 VENCEU tendo mais pontos turisticos com : %d\n", Turi1);
                pts1++;
            } else if (Turi1 < Turi2)
            {
                printf("A carta 2 VENCEU tendo mais pontos turisticos com : %d\n", Turi2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 5:
            printf("Vamos comparar os pontos a densidade deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", dens1, dens2);
            if (dens1 > dens2)
            {
                printf("A carta 1 VENCEU sendo a maior densidade com : %.2f\n", dens1);
                pts1++;
            } else if (dens1 < dens2)
            {
                printf("A carta 2 VENCEU sendo a maior densidade com : %.2f\n", dens2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 6:
            printf("Vamos comparar o SUPER PODER deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", Spoder1, Spoder2);
            if (Spoder1 > Spoder2)
            {
                printf("A carta 1 VENCEU com o maior PODER com : %.2f\n", Spoder1);
                pts1++;
            } else if (Spoder1 < Spoder2)
            {
                printf("A carta 2 VENCEU com o maior PODER com : %.2f\n", Spoder2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;

        default:

            printf("Voce nao selecionou uma opcao valida\n");
            break;
        };
        printf("==============================================================\n");
        printf("ROUND 3\n");
        printf("AGORA VEREMOS QUAL CARTA TEM MAIS PONTOS \n");
        printf("DIGITE O NUMERO PRA VER QUEM VENCEU NESSA CATEGORIA\n");
        printf("==============================================================\n");
        printf("1. para comparar o pib\n");
        printf("2. para comparar a populacao\n");
        printf("3. para comparar a Area\n");
        printf("4. para comparar os Pontos Turisticos\n");
        printf("5. para comparar a densidade\n");
        printf("6. para comparar o SUPER PODER\n");
        printf("==============================================================\n");
        scanf(" %d", &OP);
        printf("os paises na comparacao %s X %s\n", Nome1, Nome2);
        printf("==============================================================\n");
        
        //Escolha de qual estatus vai ser usado na comparação//

        switch (OP)
        {
        case 1:
            printf("Vamos comparar o PIB deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", pib1, pib2);
            if (pib1 > pib2)
            {
                printf("A carta 1 VENCEU com o maior pib com : %.2f\n", pib1);
                pts1++;
            } else if (pib1 < pib2)
            {
                printf("A carta 2 VENCEU com o maior pib com : %.2f\n", pib2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 2:
            printf("Vamos comparar a populacao deles\n");
            printf("Os pontos deles sao %d X %d\n", Polp1, Polp2);
            if (Polp1 > Polp2)
            {
                printf("A carta 1 VENCEU com a maior populacao : %d pessoas\n", Polp1);
                pts1++;
            } else if (Polp1 < Polp2)
            {
                printf("A carta 2 VENCEU com o maior populacao : %d\n", Polp2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 3:
            printf("Vamos comparar a Area deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", Area1, Area2);
            if (Area1 > Area2)
            {
                printf("A carta 1 VENCEU sendo o maior territorio com : %.2f\n", Area1);
                pts1++;
            } else if (Area1 < Area2)
            {
                printf("A carta 2 VENCEU sendo o maior territorio com : %.2f\n", Area2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 4:
            printf("Vamos comparar os pontos turisticos deles\n");
            printf("Os pontos deles sao %d X %d\n", Turi1, Turi2);
            if (Turi1 > Turi2)
            {
                printf("A carta 1 VENCEU tendo mais pontos turisticos com : %d\n", Turi1);
                pts1++;
            } else if (Turi1 < Turi2)
            {
                printf("A carta 2 VENCEU tendo mais pontos turisticos com : %d\n", Turi2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 5:
            printf("Vamos comparar os pontos a densidade deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", dens1, dens2);
            if (dens1 > dens2)
            {
                printf("A carta 1 VENCEU sendo a maior densidade com : %.2f\n", dens1);
                pts1++;
            } else if (dens1 < dens2)
            {
                printf("A carta 2 VENCEU sendo a maior densidade com : %.2f\n", dens2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;
        case 6:
            printf("Vamos comparar o SUPER PODER deles\n");
            printf("Os pontos deles sao %.2f X %.2f\n", Spoder1, Spoder2);
            if (Spoder1 > Spoder2)
            {
                printf("A carta 1 VENCEU com o maior PODER com : %.2f\n", Spoder1);
                pts1++;
            } else if (Spoder1 < Spoder2)
            {
                printf("A carta 2 VENCEU com o maior PODER com : %.2f\n", Spoder2);
                pts2++;
            }else 
            {
                printf("Deu empate\n");
            };      
            break;

        default:

            printf("Voce nao selecionou uma opcao valida\n");
            break;
        };
        printf("==============================================================\n");
        printf("somando os pontos do vencedor de cada categoria o vencedor foi\n");
        if (pts1 > pts2)
        {
            printf("O Territorio 1 com %d pontos", pts1);
        } else
        {
            printf("O Territorio 2 com %d pontos", pts2);  
        };
        
    
    return 0;
}