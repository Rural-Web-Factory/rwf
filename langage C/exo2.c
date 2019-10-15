#include <stdio.h>

int main(void) {
    int fact;
    int tune;
    int monnaie;


    printf("Montant de la facture : \n");
    scanf("%d", &fact );

    printf("Combien dans le porte-monnaie ? \n" );
    scanf("%d", &tune);

    if (fact > tune) {
      printf("Il en manque un peu...\n");
      return -1;
    }
    if (fact == tune) {
      printf("Rien à redire, rien à ajouter ;-)\n" );
      return 0;
    }
    else{
      int monnaie = tune - fact;
      return monnaie;
    }
    int feraille;

    while (monnaie > 0 ) {
      feraille = monnaie%
      printf("%d\n", feraille );
    }
  return 0;
}
