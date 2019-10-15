#include <stdio.h>
#define TAILLE_TAB 5   //constante de la taille du tableau (5 cases)

int *creation_tab (void);  //proto
void afficher_tab(int *tab, int paille);  //prototype de la fonction



int main(void)
{
  int i;
  int *tableau = creation_tab();//fonction associee à la 1ere valeur de tableau donc à tout le tableau

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

int *creation_tab(void)
{
  static int tableau_entier[5];//creation d'un tableau en tant que variable static grace a la ligne 12
  int i;

  for(i = 0; i < 5; i++)
      tableau_entier[i] = i * 3;

  return tableau_entier; //vers la fonction ligne 12 et la ligne 14 l'affiche
}
void afficher_tab(int *tab, int youpi)
{
  int i;
  for(i = 0; i < youpi; i++)
      printf("[%d]", tab[i] );
}
