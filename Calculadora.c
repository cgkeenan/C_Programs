:rocket:

### Programa en C calculadora básica.
```c

//Mi calculatoR
//Escrito por un Nerd
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b;
    char ch;
    while (1) {
        printf("!Escribe el operador a usar¡ (+, -, *,/), "
        "Si quieres salir pulsa X: \n");
        scanf("%c", &ch);
        printf ("El operador escogido es: %c\n", &ch);
        //Salida
        if (ch == 'x')
            exit(0);
        printf("Introduzca el primer y segundo operador: \n");
        scanf("%lf %lf", &a, &b);

        //Usamos case para distinguir entre los diferentes operadores
        switch (ch) {

        //Suma
        case '+':
            printf("%.lf + %.lf = %.lf\n", a, b, a + b);
            break;

        //Resta
        case '-':
        printf("%.lf - %.lf = %.lf\n", a, b, a - b);
            break;

        //Multiplicación
        case '*':
        printf("%.lf * %.lf = %.lf\n", a, b, a * b);
            break;

        //División
        case '/':
        printf("%.lf / %.lf = %.lf\n", a, b, a / b);
            break;

        //Error de operador
        default:
            printf("!ERROR¡, escoja un operador válido\n");


        }
        printf("\n");
    }




}

```
