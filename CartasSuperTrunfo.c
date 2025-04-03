#include <stdio.h>

int main(){
//definir variáveis
char a01 [30], a02 [30], estado01 [30], estado02[30], cidade01 [30], cidade02 [30];
float area01, area02, pib01, pib02;
int populacao01, populacao02, turismo01, turismo02;

//entrada de dados da primeira carta
printf("Carta 01\n");


printf("Nome do Estado:\n");
scanf("%s", estado01);

printf("Código da Carta:\n");
scanf("%s", a01);

printf("Nome da Cidade:\n");
scanf("%s", cidade01);

printf("População Total:\n");
scanf("%d", &populacao01);

printf("Pontos Turísticos:\n");
scanf("%d", &turismo01);

printf("PIB Total:\n");
scanf("%f", &pib01);

printf("Área Total:\n");
scanf("%f", &area01);

//entrada da segunda carta
printf("Carta 02\n");

printf("Nome do Estado:\n");
scanf("%s", estado02);

printf("Código da Carta:\n");
scanf("%s", a02);

printf("Nome da Ciade:\n");
scanf("%s", cidade02);

printf("Populacao Total:\n");
scanf("%d", &populacao02);

printf("Pontos Turisticos:\n");
scanf("%d", &turismo02);

printf("PIB Total:\n");
scanf("%f", &pib02);

printf("Área Total:\n");
scanf("%f", &area02);


return 0;

}
