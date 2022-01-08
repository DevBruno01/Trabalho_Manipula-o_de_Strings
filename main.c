#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "spm.h"
#include "spm.c"

int main () {
  
  char str1[] = "1 traBalho pratico de lp";
  char str2[] = "1 Trabalho Pratico de Lp";
  char str3[] = "1 trabalho pratico de lp";
  char str4[] = "1 TRABALHO PRATICO DE LP";

  printf ("\"%s\"\n", capitalize (str1));
  printf ("\"%s\"\n", center (str2, 60, '*'));

  if (isstrlower(str3)){
    printf("\"%s\" Tem todos os caracteres minusculos\n", str3);
  }
  else {
    printf("\"%s\" NAO tem todos os caracteres minusculos\n", str3);
  }
  if (isstrlower(str4)){
    printf("\"%s\" Tem todos os caracteres minusculos\n", str4);
  }
  else {
    printf("\"%s\" NAO tem todos os caracteres minusculos\n", str4);
  }

  if(isstrupper(str3)){
    printf("\"%s\" Tem todos os caracteres maiusculos\n", str3);
  }
  else {
    printf("\"%s\" NAO tem todos os caracteres maiusculos\n", str3);
  }

  if(isstrupper(str4)){
    printf("\"%s\" Tem todos os caracteres maiusculos\n", str4);
  }
  else {
    printf("\"%s\" NAO tem todos os caracteres maiusculos\n", str4);
  }
  return 0;
}
