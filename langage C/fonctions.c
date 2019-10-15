#include <stdio.h>

int coord_boule(int posX){
  posX = 150;

  return posX;
}

int main(void) {

  int boule1 =0;
  boule1 = coord_boule(boule1);
  printf("la boule a pour coordonnées X = %d\n", boule1 );

  return 0;
}
