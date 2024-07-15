/*
Ex 2 :
>Ecrire un programme qui calcule la somme des entiers d'un nombre à un autre  (maximun  :  entre 1 et 1000)
>indication : -prévoir le cas  ou "min" serait plus grand que "max" et quitter le programme si cela arrive.
                    -prévoir le cas  ou ''min" serait plus petit que 1 et ''max"  plus grand que 1000.

>Write a program that calculates the sum of integers from one number to another  (maximun  :  between 1 and 1000)
>indication:  -predict the case where "min" would be greater than "max" and leave the program if this happens.
                    -predict the case where ''min" would be smaller than 1 and ''max"  larger than 1000.

Source : formationVideo by Jason Champagne

*/

#include <stdio.h>
int main(void)
{
    int max = 0;
    int min = 0;
    int sum = 0;
    int i = 0;

    printf("Entrez le nombre maxi :\n");
    scanf("%d", &max);
    printf("Entrez le nombre min :\n");
    scanf("%d", &min);

    if (min > max)
    {
        printf("Quitte le programme\n");
        return -1;
    }
    if (min < 1)
    {
        printf("Quitte le programme\n");
        return 0;
    }
    if (max > 1000)
    {
        return 0;
    }
    if (min != max)
        for (int i = min; i < max + 1; i++)
            sum += i;

    printf("Somme finale : %d\n", sum);
    return 0;
}
