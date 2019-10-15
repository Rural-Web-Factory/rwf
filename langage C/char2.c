#include <stdio.h>
#include <string.h> //sert a utiliser des fonctions avec les chaines de caractères

 int main(void) {

  char prenom[20]; //declaration tableau
  char stock[25];
  /* OU SYNT TABLEAU -> signed char mot[] = { 'c', 'h', 'a', 'i', 'n', 'e'}; */

  printf("Comment tu t'appelle ?\n");
  scanf("%s", prenom);

  printf("Tu t'appelle : %s\n", prenom);
  printf("Veux-tu en changer ?\nChoisis-en un autre ;-)\n" );
  scanf("%s", stock);

  strcpy(prenom, stock);

  printf("Maintenant, ton prenom est : %s FELICITATION !!!!\n", prenom);

  return 0;
}
