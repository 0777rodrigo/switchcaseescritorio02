#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float quantidade;

    printf("100 cachorro quente: R$ 1.70 \n");
    printf("101 bauru simples: R$ 2.30 \n");
    printf("102 bauru com ovo: R$ 2.60 \n");
    printf("103 hamburguer: R$ 2.40 \n");
    printf("104 cheeseburguer: R$ 2.50 \n");
    printf("105 refrigerante: R$ 1.00 \n");
    scanf("%d", &opcao);

    printf("faca seu pedido \n");
    scanf("%d", &produto);
    
    printf("diga a quantidade \n");
    scanf("%f",&quantidade);

    switch (opcao)
    {
    case 100:
       printf("valor total = %2.f", 1.70 * quantidade);
        break;
    case 101:
        printf("valor total = %2.f", 2.30 * quantidade);
        break;
    case 102:
        printf("valor total = %2.f", 2.60 * quantidade);
        break;
    case 103:
        consumo = quantidade * 2.40;
        break;
    case 104:
        consumo = quantidade * 2.50 break;
    case 105:
        consumo = quantidade * 1.00 break;

    default:
        printf("numero invalido \n");
        break;
    }
}
