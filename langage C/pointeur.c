#include <stdio.h>

void changeNbr(int *nb) {//création du pointeur dans la fonction
  *nb = 15;              //attribution d'une valeur
}
int main(void) {
  int nombreA = 0;       //création de la variable

  printf("Le nombre est : %d\n", nombreA );
  changeNbr(&nombreA);   //la valeur stockée ds l'adresse du pointeur est transférée ds l'adresse de la var
  printf("Le nombre est maintenant : %d\n",nombreA );

  return 0;
}
