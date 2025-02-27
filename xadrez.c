#include <stdio.h>

void bispoM(int bispo){//função recursiva do bispo
    if ( bispo > 0)
    {
        printf("Superior-Direita\n");
        bispoM(bispo - 1);//chamando a função para realizar o cálculo pra impressão
    }}
void torreM(int torre){
    if (torre > 0)
    {
        printf("Direita\n");
        torreM(torre - 1);
    }}

void rainhaM(int rainha){
    if (rainha > 0)
    {
        printf("Esquerda\n");
        rainhaM(rainha - 1);
    }}
int main(){

int c, peca;

printf("***Escolha uma das peças abaixo***\n");
printf("1- Bispo\n");
printf("2- Torre\n");
printf("3- Rainha\n");
printf("4- Cavalo\n");
printf("Digite sua escolha:\n");
scanf("%d", &peca);

switch (peca)
{
case 1:
printf("Peça: Bispo\n");
bispoM(5);
    break;

case 2:
printf("Peça: Torre\n");
torreM(5);
break;

case 3:
printf("Peça: Rainha\n");
rainhaM(8);
break;

case 4:
printf("Peça: Cavalo\n");
int cc = 1;
while ( cc--)
{
    for (c = 0; c <= 2; c++)
    {
        printf("Baixo\n");
    }
    printf("Esquerda\n");
}
break;

default:
printf("Essa opção não existe!");
    break;
}
    return 0;
}