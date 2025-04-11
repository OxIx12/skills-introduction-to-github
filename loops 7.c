#include <stdio.h>
//ACT 11 funcion 3.-
int main(){
    int tab, valin, valf, i, j;
    char k = 'Y';
    while(k == 'Y'){
        k = 0;
        printf("Que tabla desea imprimir?\n->");
        scanf("%d", &tab);
        printf("Desde que valor desea imprimir?\n->");
        scanf("%d", &valin);
        printf("Hasta que valor desea imprimir?\n->");
        scanf("%d", &valf);
        j = valin;
        while(j <= valf){
            int mult = tab * j;
            printf("%d x %d = %d\n", tab, j, mult);
            j++;
        }
        printf("\nDesea continuar el programa?\nIngrese Y para 'si'\nIngrese N para 'no'\n->");
        scanf(" %c", &k);
        printf("\n");
    }
    printf("Adios\n");
    return 0;
}
