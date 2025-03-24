/*Instrucciones
Realizar una aplicaci[on de conversor de monedas en el lenguaje de programaci[on
C, que tenga las opciones de convertir entre quetzales, dolares estadounidenses
y eurtos. Tip: Este es un lenguaje compliado por lo que se debe compliar el
codigo para poderlo ejecutar.
*/

#include <stdio.h>

// Tasas de cambio (valores de ejemplo, ajústalos según necesites)
#define QTZ_A_DOLARES 7.6    // 1 Dólar = 7.6 Quetzales
#define QTZ_A_EUROS   8.8    // 1 Euro = 8.8 Quetzales
#define QTZ_A_PESOS   150    // 1 Quetzal = 150 Pesos Colombianos

// Funciones de conversión
double convertirQuetzalesADolares(double q) {
    return q / QTZ_A_DOLARES;
}

double convertirDolaresAQuetzales(double d) {
    return d * QTZ_A_DOLARES;
}

double convertirQuetzalesAEuros(double q) {
    return q / QTZ_A_EUROS;
}

double convertirEurosAQuetzales(double e) {
    return e * QTZ_A_EUROS;
}

double convertirQuetzalesAPesos(double q) {
    return q * QTZ_A_PESOS;
}

double convertirPesosAQuetzales(double p) {
    return p / QTZ_A_PESOS;
}

int main() {
    int opcion;
    double valor;

    do {
        // Imprimir el menú
        printf("C O N V E R S O R   D E   D I V I S A S\n");
        printf("Menu de opciones:\n");
        printf("1. Convertir de Quetzales a Dolares\n");
        printf("2. Convertir de Dolares a Quetzales\n");
        printf("3. Convertir de Quetzales a Euros\n");
        printf("4. Convertir de Euros a Quetzales\n");
        printf("5. Convertir de Quetzales a Pesos Colombianos\n");
        printf("6. Convertir de Pesos Colombianos a Quetzales\n");
        printf("7. Salir\n");
        printf("Introduzca la opcion: ");

        if (scanf("%d", &opcion) != 1) {
            // En caso de entrada inválida, limpiar el buffer
            printf("Entrada invalida. Intente de nuevo.\n");
            while(getchar() != '\n'); // vaciar el buffer
            continue;
        }

        switch(opcion) {
            case 1:
                printf("Introduzca el valor en Quetzales: ");
                scanf("%lf", &valor);
                printf("El valor en Dolares es: %.2lf\n", convertirQuetzalesADolares(valor));
                break;
            case 2:
                printf("Introduzca el valor en Dolares: ");
                scanf("%lf", &valor);
                printf("El valor en Quetzales es: %.2lf\n", convertirDolaresAQuetzales(valor));
                break;
            case 3:
                printf("Introduzca el valor en Quetzales: ");
                scanf("%lf", &valor);
                printf("El valor en Euros es: %.2lf\n", convertirQuetzalesAEuros(valor));
                break;
            case 4:
                printf("Introduzca el valor en Euros: ");
                scanf("%lf", &valor);
                printf("El valor en Quetzales es: %.2lf\n", convertirEurosAQuetzales(valor));
                break;
            case 5:
                printf("Introduzca el valor en Quetzales: ");
                scanf("%lf", &valor);
                printf("El valor en Pesos Colombianos es: %.2lf\n", convertirQuetzalesAPesos(valor));
                break;
            case 6:
                printf("Introduzca el valor en Pesos Colombianos: ");
                scanf("%lf", &valor);
                printf("El valor en Quetzales es: %.2lf\n", convertirPesosAQuetzales(valor));
                break;
            case 7:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Por favor, intente de nuevo.\n");
                break;
        }

        if (opcion != 7) {
            printf("Presione Enter para continuar...");
            while(getchar() != '\n');  // limpiar el buffer
            getchar(); // esperar a que el usuario presione Enter
        }
        printf("\n\n");

    } while(opcion != 7);

    return 0;
}