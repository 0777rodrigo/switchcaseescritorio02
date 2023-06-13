#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{

setlocale(LC_ALL, "portuguese");

int codigo;

printf("escreva o codigo \n");
scanf("%d",&codigo);

switch(codigo)
{

case 100:
printf("cachorro quente \n");
printf("valor = 1.70 \n");
break;

case 101:
printf("bauru simples \n");
printf("valor = 2.30 \n");
break;

case 102;
printf("")