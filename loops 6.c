#include <stdio.h>
//ACT 11 funcion 2.-
int main(){
    int tab, valin, valf, i, j;
    char k;
    do{
        k = 0;
        printf("Que tabla desea imprimir?\n->");
        scanf("%d", &tab);
        printf("Desde que valor desea imprimir?\n->");
        scanf("%d", &valin);
        printf("Hasta que valor desea imprimir?\n->");
        scanf("%d", &valf);
        j = valin;
        do{
            int mult = tab * j;
            printf("%d x %d = %d\n", tab, j, mult);
            j++;
        }while(j <= valf);
        printf("\nDesea continuar el programa?\nIngrese Y para 'si'\nIngrese N para 'no'\n->");
        scanf(" %c", &k);
        printf("\n");
    }while(k == 'Y');
    printf("Adios\n");
    return 0;
}
