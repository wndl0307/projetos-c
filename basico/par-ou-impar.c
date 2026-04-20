#include <stdio.h>

int main (){
    int n, par;

    printf ("Digite um numero: \n");
    scanf ("%i", &n);

    par = n % 2 == 0;

    if (n = par){
        printf ("Numero par");
    }
    else {
        printf ("Numero impar");
    }
    return 0;
}
