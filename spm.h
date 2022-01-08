
#ifndef _SPM_H
#define _SPM_H

#include <stdbool.h>

/* Transforma e devolve a string s passada como parâmetro
   com o primeiro caractere de cada palavra em letras
   maiúsculas e o outros caracteres em letras minúsculas. */
char * capitalize(char * s);

/* Transforma e devolve a string s centralizada em uma string
   de comprimento width. O preenchimento é feito usando o
   caractere especificado por fillchar. A string original
   é devolvida se width for menor ou igual a strlen(s). */
char * center(char * s, int width, char fillchar);

/* Devolve verdadeiro se todos os caracteres alfabéticos da
   string s passada como parâmetro são caracteres minúsculos. */
bool isstrlower(const char * s);

/* Devolve verdadeiro se todos os caracteres alfabéticos da
   string s passada como parâmetro são caracteres maiúsculos. */
bool isstrupper(const char * s);

#endif
