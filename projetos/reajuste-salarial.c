#include <stdio.h>


int main () {
    char nome_f[50];
    int doc_i, temp_s;
    float salario_a, calculo_percentual_1, calculo_percentual_2, salario_total, valor_aumento;

    do {
        printf ("-----------------------------------------------\n");
        printf ("---------------REAJUSTE SALARIAL---------------\n");
        printf ("-----------------------------------------------\n");
        printf ("Informe o nome do funcionario ou pressione S/s para encerrar o programa: \n");
        scanf (" %s", nome_f);
        printf ("Informe o documento de identificacao: \n");
        scanf ("%i", &doc_i);
        printf ("Informe os anos de servico: \n");
        scanf ("%i", &temp_s);
        printf ("Informe o salario atual: \n");
        scanf ("%f", &salario_a);
        printf ("\n");

        if (salario_a < 1500.) {
            printf ("Faixa salarial: R$%.2f\n", salario_a);
            calculo_percentual_1 = salario_a * 0.15;
            printf ("Percentual de reajuste correspondente ao salario atual: 15%% \n");
            printf ("Tempo de servico: %i anos\n", temp_s);
            printf ("\n");

            if (temp_s > 5) {
                calculo_percentual_2 = salario_a * 0.02;
                printf ("Bonus adicional devido ao tempo de servico: 2%% \n");
                printf ("\n");
            }
            salario_total = salario_a + calculo_percentual_1 + calculo_percentual_2;
            valor_aumento = calculo_percentual_1 + calculo_percentual_2;

            if (valor_aumento > 1000.) {
                printf ("**********************************************\n");
                printf ("***************REAJUSTE ELEVADO***************\n");
                printf ("**********************************************\n");
                printf ("\n");

            }

            if (salario_total < 1621.) {
                printf ("***************ALERTA***************\n");
                printf ("*Salario inferior ao salario minimo!*\n");
                printf ("***************ALERTA***************\n");
                printf ("\n");


            }
            printf ("Salario anterior: R$%.2f\n", salario_a);
            printf ("Percentual aplicado: 15%%\n");
            printf ("Valor do aumento: R$%.2f\n", valor_aumento);
            printf ("Novo salario: R$%.2f\n", salario_total);
            printf ("\n");

        }

        else if (salario_a >= 1500. && salario_a < 3000.) {
            printf ("Faixa salarial: R$%.2f\n", salario_a);
            calculo_percentual_1 = salario_a * 0.10;
            printf ("Percentual de reajuste correspondente ao salario atual: 10%% \n");
            printf ("Tempo de servico: %i anos\n", temp_s);
            printf ("\n");


            if (temp_s > 5) {
                calculo_percentual_2 = salario_a * 0.02;
                printf ("Bonus adicional devido ao tempo de servico: 2%%\n");
                printf ("\n");

            }
            salario_total = salario_a + calculo_percentual_1 + calculo_percentual_2;
            valor_aumento = calculo_percentual_1 + calculo_percentual_2;

            if (valor_aumento > 1000.) {
                printf ("**********************************************\n");
                printf ("***************REAJUSTE ELEVADO***************\n");
                printf ("**********************************************\n");
                printf ("\n");

            }

            if (salario_total < 1621.) {
                printf ("***************ALERTA***************\n");
                printf ("*Salario inferior ao salario minimo!*\n");
                printf ("***************ALERTA***************\n");
                printf ("\n");

            }
            printf ("Salario anterior: R$%.2f\n", salario_a);
            printf ("Percentual aplicado: 10%%\n");
            printf ("Valor do aumento: R$%.2f\n", valor_aumento);
            printf ("Novo salario: R$%.2f\n", salario_total);
            printf ("\n");

            }

        else if (salario_a >= 3000. && salario_a < 5000.) {
            printf ("Faixa salarial: R$%.2f\n", salario_a);
            calculo_percentual_1 = salario_a * 0.07;
            printf ("Percentual de reajuste correspondente ao salario atual: 7%%\n");
            printf ("Tempo de servico: %i anos\n", temp_s);
            printf ("\n");


            if (temp_s > 5) {
                calculo_percentual_2 = salario_a * 0.02;
                printf ("Bonus adicional devido ao tempo de servico: 2%%\n");
                printf ("\n");

            }
            salario_total = salario_a + calculo_percentual_1 + calculo_percentual_2;
            valor_aumento = calculo_percentual_1 + calculo_percentual_2;

            if (valor_aumento > 1000.) {
                printf ("**********************************************\n");
                printf ("***************REAJUSTE ELEVADO***************\n");
                printf ("**********************************************\n");
                printf ("\n");

            }

            if (salario_total < 1621.) {
                printf ("***************ALERTA***************\n");
                printf ("*Salario inferior ao salario minimo!*\n");
                printf ("***************ALERTA***************\n");
                printf ("\n");

            }
            printf ("Salario anterior: R$%.2f\n", salario_a);
            printf ("Percentual aplicado: 7%%\n");
            printf ("Valor do aumento: R$%.2f\n", valor_aumento);
            printf ("Novo salario: R$%.2f\n", salario_total);
            printf ("\n");

        }
        else {
            printf ("Faixa salarial: R$%.2f\n", salario_a);
            calculo_percentual_1 = salario_a * 0.05;
            printf ("Percentual de reajuste correspondente ao salario atual: 5%%\n");
            printf ("Tempo de servico: %i anos\n", temp_s);
            printf ("\n");


            if (temp_s > 5) {
                calculo_percentual_2 = salario_a * 0.02;
                printf ("Bonus adicional devido ao tempo de servico: 2%%\n");
                printf ("\n");

            }
            salario_total = salario_a + calculo_percentual_1 + calculo_percentual_2;
            valor_aumento = calculo_percentual_1 + calculo_percentual_2;

            if (valor_aumento > 1000.) {
                printf ("**********************************************\n");
                printf ("***************REAJUSTE ELEVADO***************\n");
                printf ("**********************************************\n");
                printf ("\n");

            }

            if (salario_total < 1621.) {
                printf ("***************ALERTA***************\n");
                printf ("*Salario inferior ao salario minimo!*\n");
                printf ("***************ALERTA***************\n");
                printf ("\n");

            }
            printf ("Salario anterior: R$%.2f\n", salario_a);
            printf ("Percentual aplicado: 5%%\n");
            printf ("Valor do aumento: R$%.2f\n", valor_aumento);
            printf ("Novo salario: R$%.2f\n", salario_total);
            printf ("\n");

        }
    }
    while (nome_f != "S" && nome_f != "s");
        printf ("Programa encerrado");

    return 0;
}

