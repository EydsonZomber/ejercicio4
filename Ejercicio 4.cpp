#include <stdio.h>

int main() {
  int edad1, edad2, edad3, edadMayor, edadMenor, edadMedia;

  // Solicitar al usuario las edades
  printf("Ingrese la edad del hijo 1: ");
  scanf("%d", &edad1);
  printf("Ingrese la edad del hijo 2: ");
  scanf("%d", &edad2);
  printf("Ingrese la edad del hijo 3: ");
  scanf("%d", &edad3);

  // Determinar la edad mayor
  if (edad1 >= edad2 && edad1 >= edad3) {
    edadMayor = edad1;
  } else if (edad2 >= edad1 && edad2 >= edad3) {
    edadMayor = edad2;
  } else {
    edadMayor = edad3;
  }

  // Determinar la edad menor
  if (edad1 <= edad2 && edad1 <= edad3) {
    edadMenor = edad1;
  } else if (edad2 <= edad1 && edad2 <= edad3) {
    edadMenor = edad2;
  } else {
    edadMenor = edad3;
  }

  // Calcular la edad media
  edadMedia = (edad1 + edad2 + edad3) / 3;

  // Mostrar los resultados
  printf("\nEdad mayor: %d\n", edadMayor);
  printf("Edad menor: %d\n", edadMenor);
  printf("Edad media: %d\n", edadMedia);

  return 0;
}
