#include <stdio.h>

 int main(void) {
  int i = 0;
  int j = 0;
  int k = 0;

  while(i<20){
    printf("Ceci est une boucle...\n");
    i++;
  }
/* ------------------------------------------*/
    do {
    printf("autre boucle\n");
    j++;
  } while(j<6);

/*---------------------------------------------
do execute la commande et verifie APRES la condition */

    do{
        printf("BOUCLEEEEEEEEEEEEEEEEEEEE\n" );
        k++;
      }
      while(k >2000);
/*-----------------------------------------------*/

int h;

for(h=0; h<5; h++){
  printf("code condensé de boucle\n" );
}

  return 0;
}
