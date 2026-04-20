#include<stdio.h>

int main (){
    int n1, n2;

    printf ("Digite o primeiro numero: \n");
    scanf ("%i", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%i", &n2);
    printf("\n");

    if (n1 > n2){
        printf("O maior numero e: %i\n", n1);
    }
    else {
        printf ("O maior numero e: %i\n", n2);
    }
    return 0;
}
