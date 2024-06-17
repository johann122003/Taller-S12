#include "funciones.h"

void ingresar_datos(struct usuario user[2]) {
  int i;
  for (i = 0; i < 2; i++) {
    printf("Ingrese datos usuario %d\n", i + 1);
    scanf("%s", user[i].nombre);
    scanf("%d", &user[i].nun_casa);
  }
}

int main(void) {
  int i;
  struct usuario user[2];

  ingresar_datos(user);

  for (i = 0; i < 2; i++) {
    printf("%s\t%d\n", user[i].nombre, user[i].nun_casa);
  }

  return 0;
}