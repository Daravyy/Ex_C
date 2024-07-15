#include <stdio.h>
int main(void)
{
    int purchases = 0;
    int amout_paid = 0;
    int result = 0;
    int bill20 = 0;
    int bill10 = 0;
    int bill5 = 0;
    int coin2 = 0;
    int coin1 = 0;

    printf("Entrez le total des achats :");
    scanf("%d", &purchases);
    printf("Entrez la somme payee :");
    scanf("%d", &amout_paid);

    if (amout_paid < purchases)
    {
        printf("Vous n'avez pas payer suffisament  !\n");
        return -1;
    }
    else if (amout_paid == purchases)
    {
        printf("Pas de monnaie à  rendre\n");
    }
    else
        (result = amout_paid - purchases);
    {

        bill20 = result / 20;
        result = result % 20;
        bill10 = result / 10;
        result = result % 10;
        bill5 = result / 5;
        result = result % 5;
        coin1 = result / 1;
        result = result % 1;
        coin2 = result / 2;
        result = result % 2;
    }

    printf("\n____MONNAIE A RENDRE___\n");
    if (bill20 > 0)
        ;
    printf("Nombre de Billet de 20 euros :%d\n", bill20);
    if (bill10 > 0)
        ;
    printf("Nombre de Billet de 10 euros :%d\n", bill10);
    if (bill5 > 0)
        ;
    printf("Nombre de Billet de 5 euros :%d\n", bill5);
    if (coin1 > 0)
        ;
    printf("Nombre de piece 1 euros :%d\n", coin1);
    if (coin2 > 0)
        ;
    printf("Nombre de Piece de 2 euros :%d\n", coin2);
    return 0;
}