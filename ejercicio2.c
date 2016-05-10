/* Programa 2 - Última prueba del acceso */
#include <stdio.h>
int main()
{
  int num1;
  int num2;

  printf ("Bienvenido al programa para el cálculo del mayor de dos números. Ejercicio 2\n ");
  printf ("\nIntroduce el primer número: ");
  scanf ("%i",&num1);
  printf ("\nIntroduce el segundo número: ");
  scanf ("%i",&num2);
  if (num1 > num2){                             // no es necesario mirar si son iguales
    printf("El mayor de los dos números es: %i",num1);
  }else{
    printf("El mayor de los dos números es: %i",num2);
  }

  return 0;
}
