// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int numeros [12];
  int c, pares = 0;
  for(c = 0; c <12; c++){
      printf("digite o numero da posição %d: ", c);
      scanf("%d", &numeros[c]);
      if(numeros[c] % 2 == 0){
          pares++;
      }
      else{
  }
    printf("quantidade de pares: %d", pares);
    return 0;
}
}
