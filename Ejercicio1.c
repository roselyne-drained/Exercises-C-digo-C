#include <stdio.h>

int main(void)
{

    //Variables:
    int operaciones;
    //Cuando declaremos variables no podemos convinarla en el codigo y pasarla por
    //ejemplo de un numero entero "int" y despues declararla como uno flotante despues
    //"float" de principio a fin del codigo debe quedar que tipo de variable sera.
    float kilos;
    float libras;

    //Inicio en dónde se pide que el usuario identifique que medida preferiría
    //convertir y a que otra medida sería:
    printf("1 Para convertir de kilos a libras.\n");
    printf("2 Para convertir de libras a kilos.\n");
    printf("Que deseas convertir? \n");
    //Preferiblemente para numeros enteros usemos el scanf "%d" ya que el "%i" parece tener fallos
    //Leyendolo.
    scanf("%d" , &operaciones);

    //Decisión, se usa el if statement como en JavaScript y se coloca dentro el proceso para
    //que el usuario escoja que procedimiento seguirá:

    //En caso que el usuario escogiera la primer opción se convierte de kilos a libras:
    if (operaciones == 1) {
        printf("Introduce los kilos:\n");
        scanf("%f", &kilos);
        float conversion1 = kilos * 2.205;
        //El .2f lo que funciona es para que la cantidad solo nos la entregue con 2 decimales
        //en vez de que con una gran cantidad de numeros.
        printf("El resultado son: %.2f libras\n", conversion1);
    }
    //En caso contrario que el usurious escogiera la segunda opción se convierte de libras a kilos:
    else if (operaciones == 2) {
        printf("Introduce las libras:\n");
        scanf("%f", &libras);
        float conversion2 = libras / 2.205;
        //El .2f lo que funciona es para que la cantidad solo nos la entregue con 2 decimales
        //en vez de que con una gran cantidad de numeros.
        printf("El resultado son: %.2f kilos\n", conversion2);
    } // En caso que el usuario quisiera escoger alguna opción fuera del planteamiento no sería posible.
    else {
        printf("Operación invalida\n");
    }
    return 0;
}

