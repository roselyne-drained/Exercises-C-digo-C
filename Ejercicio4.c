//
// Created by Roselyne on 9/14/2024.
//
#include <stdio.h>

int main(void){

    //El ejercicio nos dice que calculamos una nómina
    //de un profesor del Cucei.
    //Declaramos nuestras variables primero:
    //Materias sera la variable que el usuario nos entregue, permitiendonos saber cuantas materias tiene el maestro.
    int Materias;
    int MateriaHoras = 20;
    float HorasPago = 80;
    float Ayuda = 300;

    printf("Bienvenido maestra(o).\nCuántas materias tiene?\n");
    scanf("%d", &Materias);

    float PagoInicial = (Materias * MateriaHoras) * HorasPago;
    float Impuestos = (PagoInicial * 16) / 100;
    float PagoSeguro = (PagoInicial * 5) / 100;
    float PagoFinal1 = (PagoInicial - Impuestos) - PagoSeguro;
    float PagoFinal2 = (PagoFinal1 + Ayuda);

    printf("Su sueldo neto es de: %.2f$\n",  PagoInicial);
    printf("Se le dedujo de impuestos %.2f$\n", Impuestos);
    printf("Se le dedujo del seguro de gastos médicos %.2f\n$", PagoSeguro);
    printf("Y se le añadió 300$ de despensas\n");
    printf("Su nomina total es: %.2f\n$", PagoFinal2);

    return 0;

}