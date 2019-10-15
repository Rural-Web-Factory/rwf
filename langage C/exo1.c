#include <stdio.h>

int main(void)
{
   int nombre = 0;

  printf("Entrez un nombre :\n" );
  scanf("%d", &nombre);
  printf("Valeur en octal :%o\n",nombre );
  printf("Valeur en hexadecimal :%x\n",nombre );


  return 0;
}
