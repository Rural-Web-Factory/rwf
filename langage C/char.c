#include <stdio.h>

 int main(void) {

  signed char prenom[] = "chaine de caractère"; //declaration tableau
  /* OU SYNT TABLEAU -> signed char mot[] = { 'c', 'h', 'a', 'i', 'n', 'e'}; */

  printf("Comment tu t'appelle ?\n");
  scanf("%s", prenom);
  printf("Ton prenom est : %s\n", prenom);

  return 0;
}
