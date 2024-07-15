#include <stdio.h>
#include "numbers.h"
#include <stdlib.h>

void show_menu(void)
{
    printf("1. Addition_Add\n2. Soustration_Sub\n3. Multiplication_Multi\n4. Division_div\n5. Quitter_Exit\n");
}
int do_operation(int choice)
{
    int nb1 = 0, nb2 = 0;
    int result = 0;
    do
    {
        printf("Entrez un premier nombre  :");
        scanf("%d", &nb1);
        printf("Entrez un deuxieme  nombre :");
        scanf("%d", &nb2);
        if (nb1 < -1000 || nb1 > 1000 || nb2 < -1000 || nb2 > 1000)
            printf("Saisie incorrecte (choisir un nombre entre -1000 et 1000)\n");
        else
        {
            if (choice == 1)
                result = addition(nb1, nb2);
            else if (choice == 2)
                result = soustration(nb1, nb2);
            else if (choice == 3)
                result = multplication(nb1, nb2);
            else if (choice == 4)
                result = division(nb1, nb2);
            printf("Resultat du calcul = %d\n", result);
        }
    } while (nb1 < -1000 || nb1 > 1000 || nb2 < -1000 || nb2 > 1000);
}

int addition(int a, int b)
{
    return a + b;
}
int soustration(int a, int b)
{
    return a - b;
}
int multplication(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    if (b > 0)
        printf("Division par 0 impossible\n");
    exit(-1);
    return a / b;
}