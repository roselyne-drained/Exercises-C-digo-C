//
// Created by Roselyne on 9/11/2024.
//
//Realizamos nuestro ejercicio 3 y como siempre empezamos por poner al inicio nuestro
//codigo #include <stdio.h>
#include <stdio.h>

int main(void){
  //Nuestro ejercicio nos dice que el usuario desea comprar un producto con el 30% de descuento
  //pero desea conocer el precio final ya con el descuento.
  //Como siempre empezamos por declarando variables:
  float precio_inicial;
  float descuento = 30;

  //Ahora pedimos al usuario que nos indique cual es el precio inicial del producto.
  printf("Bienvenido usuario:\n");
  printf("Por favor ingrese el precio inical del producto que desea conocer con descuento:\n");
  scanf("%f", &precio_inicial);

  printf("El prodcuto cuenta con el 30 de descuento \n:");
  float descontado = (precio_inicial * descuento) / 100;
  float precio_final = precio_inicial - descontado;
  printf("Por lo que el precio final es:%.2f\n", precio_final);

  return 0;
  }