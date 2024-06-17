// llamar una estructura a otra, primero crear a la que llamo
#include <stdio.h>
struct direccion{
char callep [40];
int nun_casa ;
char ciudad[40];
char paroquia [20];
};

struct usuario{
char nombre[40];
char apellido [40];
struct direccion dir;
char fono[15];
};

int main(void) {
  struct usuario pablo1={
    "Pablo",
    "Piccaso",
    {"Calle_p", 4567, "UIO", "Cumbayork"},
      "55-55-55-55"
  };
    printf("Usuario: %s %s \n", pablo1.nombre, pablo1.apellido);
    printf("Usuario: %s %d %s %s \n", pablo1.dir.callep, pablo1.dir.nun_casa, pablo1.dir.ciudad, pablo1.dir.paroquia);
  return 0; 
}