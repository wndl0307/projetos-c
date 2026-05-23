#include <stdio.h>

int main() {

    float n1, n2;
    float media_g1;
    float nota_g2;
    float media_final;

    printf("==============================================\n");
    printf("=============== SISTEMA DE NOTAS =============\n");
    printf("==============================================\n\n");

    printf("Informe a primeira nota do aluno:\n");
    scanf("%f", &n1);

    printf("Informe a segunda nota do aluno:\n");
    scanf("%f", &n2);

    printf("\n");

    media_g1 = (n1 + n2) / 2;

    printf("Media G1: %.1f\n\n", media_g1);

    // aprovado direto
    if (media_g1 >= 7) {

        printf("Aprovado em G1\n");

    }

    // vai para G2
    else if (media_g1 > 4 && media_g1 < 7) {

        printf("Informe a nota de G2:\n");
        scanf("%f", &nota_g2);

        media_final = (media_g1 + nota_g2) / 2;

        printf("Media final: %.1f\n\n", media_final);

        if (media_final >= 5) {
            printf("Aprovado\n");
        }
        else {
            printf("Reprovado\n");
        }

    }

    // reprovado direto
    else {

        printf("Reprovado\n");

    }

    return 0;
}
