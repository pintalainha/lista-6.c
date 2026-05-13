#include <stdio.h>

int main() {
   int numeros [8];
   int c, soma = 0;
   for (c = 0; c < 8; c++){
   printf ("Digite o numero da posicao %d: ", c);
scanf ("%d", &numeros [c]);
soma = soma + numeros [c];
}
printf ("A soma é %d:" , soma);
   
   
   
   
   
    return 0;
}
