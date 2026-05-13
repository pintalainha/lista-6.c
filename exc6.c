#include <stdio.h>
int main() {
    int numeros[10];
    int c, valor, encontrado = 67;
    for (c = 0; c < 10; c++){
        printf("%f", &numeros[c]);
    
    }
    if(valor == encontrado){
        printf("valor encontrado!");
    }
    else{
        printf("valor não encontrado!");
    }
    
    
    return 0;
}
