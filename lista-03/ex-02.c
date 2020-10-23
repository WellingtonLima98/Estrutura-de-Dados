#include <stdio.h>

/*
  Elabore um registro que contenha os seguintes campos: nome e nota. O campo nota
  deverá ser um vetor com 03 notas para registrar as notas AP1, AP2 e FINAL.
*/

int main(){
  
  struct Aluno {
    char nome[36];
    float notas[3];
  };

  return 0;
}