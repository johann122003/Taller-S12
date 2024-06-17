#include <stdio.h>
#include <stdlib.h>
// r abre el fichero para lectura
// w abre el fichero para escritura, si el archivo no existe lo crea
// a abre el fichero para agregar datos al final
// + abre el fichero para lectura y escritura
// b abre el fichero en modo binario
// t abre el fichero en modo texto

int main(void) {
  FILE *prt;
  char archivo []= "datos.txt"; // se puede poner la direccion real con // 
  prt = fopen(archivo, "w");
  if (prt == NULL){
    printf("Error al abrir el archivo %s\n", archivo);
    return 1;
  }
  fclose(prt);
  return 0;
}