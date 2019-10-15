#include <stdio.h>
#define TAILLE_TAB 5   //constante de la taille du tableau (5 cases)

void afficher_tab(int *tab, int taille);  //prototype de la fonction



int main(void) {
  int tableau [TAILLE_TAB] = {15, 23, 5, -6, 0};
  int i;

  afficher_tab(tableau, TAILLE_TAB);//appelle la fonction

  printf("\n\n" );
  tableau[3] = 33;

  afficher_tab(tableau, TAILLE_TAB);//appelle la fonction

  printf("\n\n" );
  tableau[3] = -6;
  tableau[4] = 777;

  afficher_tab(tableau, TAILLE_TAB);//appelle la fonction

  return 0;
}
void afficher_tab(int *tab, int taille)
{
  int i;
  for(i = 0; i < taille; i++)
      printf("[%d]", tab[i] );
}
