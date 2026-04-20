#include<stdio.h>

int main (){
    float n1, n2, n3, media;

    printf ("==============================================\n");
    printf ("===============SISTEMA DE NOTAS===============\n");
    printf ("==============================================\n");
    printf ("\n");
    printf ("Informe a primeira nota do aluno: \n");
    scanf ("%f", &n1);
    printf ("Informe a segunda nota do aluno: \n");
    scanf ("%f", &n2);
    printf ("Informe a terceira nota do aluno: \n");
    scanf ("%f", &n3);
    printf("\n");
    media = (n1 + n2 + n3)/3;
    printf ("Media do aluno: %.1f\n", media);
    printf ("\n");

    if (media >= 7.) {
        printf ("Aluno Aprovado!\n");
    }
    else {
        printf ("Aluno Reprovado!\n");
    }

 return 0;
}
