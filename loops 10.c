#include <stdio.h>
//ACT 11 funcion 6.-
int f1();
int f2();
int f3();

int main(){
    int fun;
    char i = 'Y';
    while(i == 'Y'){
        printf("Ingrese un numero para seleccionar la funcion que quiere ejecutar.\n ->1 = f1\n ->2 = f2\n ->3 = f3\n>> ");
        scanf("%d", &fun);
        if(fun == 1){
            f1();
        }
        else if(fun == 2){
            f2();
        }
        else if(fun == 3){
            f3();
        }
        i = 0;
        printf("\nDesea reiniciar el programa?\n> Presione 'Y' para si o 'N' para no: ");
        scanf(" %c", &i);
        printf("\n");
    }
    printf("Adios\n");
    return 0;
}

int f1(){
    char x = 'Y';
    while(x == 'Y'){
        printf("\nESTE PROGRAMA UTILIZA IF ELSE\n");
        int num;
        printf("Ingrese un numero del 1 al 3 para calcular el area de una de las siguientes figuras:\n->1 = Cuadrado\n->2 = Triangulo\n->3 = Circulo\n>> ");
        scanf("%d", &num);
        if(num == 1){
            int b, h;
            printf("\n=Area de un cuadrado=\n");
            printf("->Ingrese la base: ");
            scanf("%d", &b);
            printf("\n->Ingrese la altura: ");
            scanf("%d", &h);
            int op1 = b * h;
            printf("\n->Area = %d", op1);
        }
        else if(num == 2){
            int b2, h2;
            printf("\n=Area de un triangulo=\n");
            printf("->Ingrese la base: ");
            scanf("%d", &b2);
            printf("\n->Ingrese la altura: ");
            scanf("%d", &h2);
            int op2 = (b2 * h2) / 2;
            printf("\n->Area = %d", op2);
        }
        else if(num == 3){
            printf("\n=Area de un circulo=\n");
            const float pi = 3.1416;
            float rad;
            printf("->Ingrese el radio del circulo: ");
            scanf("%f", &rad);
            fflush(stdin);
            float op3 = pi * (rad * rad);
            printf("\n->Area = %.2f", op3);
        }
        x = 0;
        printf("\n\nDesea continuar es esta seccion?\n >Presione 'Y' para si o 'N' para no: ");
        scanf(" %c", &x);
    }
    printf("\n");
    return 0;
}

int f2(){
    char y = 'Y';
    while(y == 'Y'){
        printf("\nESTE PROGRAMA UTILIZA SWITCH\n");
        char let;
        float num1, num2, op;
        printf("Ingrese una de las siguientes letras para para determinar la operacion a realizar:\n->s = Suma de 2 numeros\n->r = Resta de dos numeros\n->m = Multiplicacion de dos numeros\n>> ");
        scanf(" %c", &let);
        switch(let){
            case 's' :
            case 'S' :
                printf("\nSuma\n");
                printf("->Num 1 = ");
                scanf("%f", &num1);
                printf("\n->Num 2 = ");
                scanf("%f", &num2);
                op = num1 + num2;
                printf("\n-> %.4f + %.4f = %.4f", num1, num2, op);
                break;
            case 'r' :
            case 'R' :
                printf("\nResta\n");
                printf("->Num 1 = ");
                scanf("%f", &num1);
                printf("\n->Num 2 = ");
                scanf("%f", &num2);
                op = num1 - num2;
                printf("\n-> %.4f - %.4f = %.4f", num1, num2, op);
                break;
            case 'm' :
            case 'M' :
                printf("\nMultipliacion\n");
                printf("->Num 1 = ");
                scanf("%f", &num1);
                printf("\n->Num 2 = ");
                scanf("%f", &num2);
                op = num1 * num2;
                printf("\n-> %.4f * %.4f = %.4f", num1, num2, op);
                break;
        }
        y = 0;
        printf("\n\nDesea continuar en esta seccion?\n> Presione 'Y' para si o 'N' para no: ");
        scanf(" %c", &y);
    }
    printf("\n");
    return 0;
}

int f3(){
    char z = 'Y';
    while(z == 'Y'){
        printf("\nESTE PROGRAMA UTILIZA OPERADOR TERNARIO\n");
        int num;
        printf("Ingrese un numero para determinar si es par o impar: ");
        scanf("%d", &num);
        (num % 2 == 0)? printf("\n%d es par", num) : printf("\n%d es impar", num);
        z = 0;
        printf("\n\nDesea continuar en esta seccion?\n> Presione 'Y' para si o 'N' para no: ");
        scanf(" %c", &z);
    }
    printf("\n");
    return 0;
}
