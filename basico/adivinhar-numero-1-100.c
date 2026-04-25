#include<stdio.h>

int main(){
    int nsecreto = 57, nusuario;

    printf ("Tente adivinhar o numero secreto de 1 a 100: \n");
    scanf ("%d", &nusuario);

    do{
            if (nusuario < nsecreto){
                printf ("Erroooouuuuu!");
                printf (" O numero secreto e maior que esse\n");
                printf ("Tente novamente:");
                printf ("\n")

                scanf ("%d", &nusuario);
            }
            else if (nusuario > nsecreto){
                printf ("Erroooouuuuu!");
                printf (" O numero secreto e menor que esse\n");
                printf ("Tente novamente:");
                printf ("\n")
                scanf ("%d", &nusuario);
            }
            else {
            }
    } while(nusuario != nsecreto);{
        printf ("Parabens!, voce acertou o numero secreto!");
        printf (" O numero secreto era: %d", nsecreto);
        printf ("\n");
    }
return 0;
}
