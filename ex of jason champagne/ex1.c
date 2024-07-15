/*
Ex 2 :  
> Ecrire un  programme de rendu de monnaie.En saissant le montant total  des achats 
puis la somme donnée, indiquer  la  monnaie a rendre  ( billets de 20 euros, 10, 5, et pieces  de 2 euros, 1).
> Indications  :
-S'assurer que la somme donnée est bien supérieure  à la somme des achats
-Gérer  le cas ou on aurait payé un montant égal aux achats
-Rendre  le moins  de billets/pièces possible (25 euros de monnaie -> 1 billet de 20 euros + 1 billet de 5 euros)
-L'opérateur %  (modulo) sera utile  pour cet exercice.

> Write a change program. By entering the total amount of purchases 
then the sum given, indicate the change to be returned  ( notes of 20 euros, 10, 5, and pieces of 2 euros, 1).
> Indications:
-Ensure that the given amount is well above the sum of purchases
-Manage case where an equal amount was paid for purchases
-Make as few banknotes/coins as possible (25 euro change -> 1 20 euro note + 1 5 euro note)
-The %  (modulo) operator will be useful for this exercise.

Source : FormationVideo by Jason Champagne
*/

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
