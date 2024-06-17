#include <stdio.h>



struct automovil{ //308 bytes
char marca[100];
char modelo[100];
char color [100];
int anio_modelo;
int km;
};    // auto entre la llave y punto coma para llamar

int main(void) {
  struct automovil * prt;
  struct automovil auto1 = {"Audi","TT","AZUL",2023};
  prt = &auto1;
  printf("El mejor auto es %s y el modelo es %s el color es %s el anio es %d \n",auto1.marca, auto1.modelo, auto1.color, auto1.anio_modelo);
  printf("El mejor auto es %s y el modelo es %s el color es %s el anio es %d \n",prt ->marca, prt ->modelo, prt ->color, prt ->anio_modelo);
  return 0;
}