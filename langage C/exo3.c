#include <stdio.h>

int main(void) {

    int min = 0, max = 0, add = 0;


    printf("Entrez un minimum : " );
    scanf("%d", &min);

    if (min < 0) {
      printf("Trop petit !!!\n" );
      return -1;
    }

    printf("Entrez un maximum : ");
    scanf("%d", &max);

    if (max > 100) {
      printf("Gourmand...\n");
      return -1;
    }

    if (min > max) {
      printf("Legère incohérence...\n" );
      return -1;
    }
     for (int i = min; i < max+1; i++)
       add += i;
       printf("La somme est : %d\n", add);

  return 0;
}

// variante : utiliser do while pour verifier les donnees saisies par
// l'utilisateur 
