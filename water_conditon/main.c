#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Déclaration des variables
    int temp;

    // Code
    printf("WWhat is the water Temperature ? ");
    scanf("%d",&temp);

     if (temp >= 100)
     printf("L'eau est GAZ.");
     else if (temp < 0)
     printf("L'eau est GLACEE");
     else
        printf("L'eau est liquide");
    return 0;
}
