#include <stdio.h>


struct player {
signed char user[25];
int hp;
int mp;
};

int main(void) {
    struct player P1 = {
      "Noa", 200, 100
    };
    printf("Quel est ton pseudo ? \n");
    scanf("%s", P1.user );


    printf("Nom de joueur : %s\n", P1.user);
    printf("health : %d | MP : %d\n", P1.hp, P1.mp );

  return 0;
}
