#include <stdio.h>

int main() {
    int b, t, r, peca;

printf("***Escolha uma das peças abaixo***\n");
printf("1- Bispo\n");
printf("2- Torre\n");
printf("3- Rainha\n");
printf("Digite sua escolha:\n");
scanf("%d", &peca);

switch (peca)
{
case 1:
    printf("Peça: Bispo\n");
for (b = 1; b <= 5; b++)
{
    printf("Superior-Direita\n");
}
    break;

case 2:

printf("Peça: Torre\n");

for(t= 1; t <= 5; t++)
{
    printf("Direita\n");
}
break;

case 3:
printf("Peça: Rainha\n");
for (r = 1; r<=8; r++)
{
    printf("Esquerda\n");
}
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

default:
printf("Essa opção não existe!\n");
    break;
}
    return 0;
}
