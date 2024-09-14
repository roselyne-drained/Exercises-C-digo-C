//
// Created by Roselyne on 9/11/2024.
//
// Ejercicio 2 Sacar el promedio de 5 calificaciones dadas por el usuario.
// No estoy muy seguro del porque pero siempre añade esto de momento al principio de tu codigo.
// #include <stdio.h>
#include <stdio.h>

int main(void) {
  //Tenemos que preguntarle al usuario por 5 cantidades, asi que declaramos esas cantidades.
  //No olvides que siempre al final de casi que cualquier linea si no es que todas terminan en ;
  //Variables:
  float calificacion1;
  float calificacion2;
  float calificacion3;
  float calificacion4;
  float calificacion5;
  int Operaciones;

  //Inicio
  //Mencionamos al usuario sobre si desea realizar y promediar sus calificaciones
  printf("Deseas promediar tus calificaciones del semestre?\n ");
  printf("1 para promediar tus calificaciones del semestre:\n ");
  printf("2 Para salir:\n ");
  printf("Proceso a seguir:\n");
  scanf("%d", &Operaciones);

  //El usuario toma la decisiones y empieza o se cierra el proceso dependiendo de su decision
  //(En el caso de que se decida promediar para facilitar los proceso supongamos que todo alumno tiene 5
  // materias obligatoriamente.)
  if (Operaciones == 1) {
    printf("Ingrese el valor de la primer calificacion:\n ");
    scanf("%f", &calificacion1);
    printf("Ingrese el valor de la segunda calificacion:\n ");
    scanf("%f", &calificacion2);
    printf("Ingrese el valor de la tercer calificacion:\n ");
    scanf("%f", &calificacion3);
    printf("Ingrese el valor de la cuarta calificacion:\n ");
    scanf("%f", &calificacion4);
    printf("Ingrese el valor de la quinta calificacion:\n ");
    scanf("%f", &calificacion5);
    //Tomamos todas las calificaiones para luego dividirlas.
    float suma = calificacion1 + calificacion2 + calificacion3 + calificacion4 + calificacion5;
    //Las dividimos y asi hacemos nuestro promedio.
    float promedio = suma /  5;
    printf("El promedio de la calificacion es: %.2f\n", promedio);
    //En caso que el usuario haya decidido salir del proceso.
  }
    else if (Operaciones == 2) {
            printf("Programa terminado, hasta luego :)!\n");
  }
  else {
    printf("Operacion invalida!, programa finalizado. :P\n");

  }

return 0;

}
