#include<stdio.h>

int main(){
    int opcao;
    float saldo = 0, valor;

    do{
        printf ("\n==================================\n");
        printf ("\n          MENU PRINCIPAL          \n");
        printf ("\n==================================\n");
        printf ("1 - Ver Saldo\n");
        printf ("2 - Depositar\n");
        printf ("3 - Sacar\n");
        printf ("4 - Sair\n");
        printf ("Escolha uma opcao: ");
        printf ("\n");
        scanf ("%d", &opcao);


        if (opcao == 1){
            printf ("\n=============================\n");
            printf ("\n          VER SALDO          \n");
            printf ("\n=============================\n");
            printf ("Saldo Atual: R$%.2f\n", saldo);
            printf ("\n");
        }
        else if (opcao == 2){
            printf ("\n=============================\n");
            printf ("\n          DEPOSITAR          \n");
            printf ("\n=============================\n");
            printf ("Digite o valor do deposito: \n");
            scanf ("%f", &valor);

            if (valor > 0){
                saldo += valor;
                printf ("Deposito realizado!\n");
                printf ("Voce depositou: R$%.2f\n", valor);
                printf ("\n");
            }
            else {
                printf ("\n*********************************************\n");
                printf ("\n   NAO E POSSIVEL DEPOSITAR VALOR NEGATIVO   \n");
                printf ("\n*********************************************\n");
            }
        }
        else if (opcao == 3){
            printf ("\n=========================\n");
            printf ("\n          SACAR          \n");
            printf ("\n=========================\n");
            printf ("Digite o valor do saque: \n");
            scanf ("%f", &valor);

            if (valor > 0 && valor <= saldo){
                saldo -= valor;
                printf ("Saque realizado!\n");
                printf ("Voce sacou: R$%.2f\n", valor);
                printf ("\n");
            }

            else {
                printf ("\n**********************************************************\n");
                printf ("\n   NAO E POSSIVEL SACAR UM VALOR MAIOR DO QUE SEU SALDO   \n");
                printf ("\n**********************************************************\n");
            }
        }
        else if (opcao == 4){
            printf ("\n========================\n");
            printf ("\n          SAIR          \n");
            printf ("\n========================\n");
        }
        else{
            printf ("\n====================\n");
            printf ("\n   OPCAO INVALIDA   \n");
            printf ("\n====================\n");
        }

    } while (opcao != 4);
        printf ("Programa encerrado");

return 0;
}
