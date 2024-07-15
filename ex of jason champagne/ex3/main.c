#include <stdio.h>
#include "numbers.h"

void app(void)
{
    int choice = 0;
    do
    {
        show_menu();
        printf(">");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // addition
            do_operation(choice);
            break;
        case 2:
            // soustration
            do_operation(choice);
            break;
        case 3:
            // Multiplication
            do_operation(choice);
            break;
        case 4:
            // Division
            do_operation(choice);
            break;
        case 5:
            // Quitter
            break;
        default:
            printf("Option incorrecte ! \n");
            break;
        }

    } while (choice != 5); // si choisir 5 = >  quitter le switch
}

int main(void)
{
    app();
    return 0;
}