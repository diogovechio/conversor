#include <stdio.h>
#include <stdlib.h>

void CtoF();
void FtoC();
void MtoKm();
void KmtoM();


//LIMPAR O BUFFER DO TECLADO
void flush_in() {
    int ch;
    while (
        (ch = fgetc(stdin)) != EOF && ch != '\n')
    {}
}

int main() {

    int selecao;

    printf("Escolha a convers%co que deseja fazer ou digite 0 para sair: \n\n", 198);

    printf("1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n3 - Milhas para quil%cmetros\n4 - Quil%cmetros para milhas\n",147,147);

    printf("\nOp%c%co n%cmero: ",135,198,163);
    scanf_s("%i", &selecao);

    if (selecao == 1) {
        flush_in();
        CtoF();
    }

    if (selecao == 2) {
        flush_in();
        FtoC();
    }

    if (selecao == 3) {
        flush_in();
        MtoKm();
    }

    if (selecao == 4) {
        flush_in();
        KmtoM();
    }

    if (selecao > 4 || selecao < 0) {
        printf("\nOp%c%co inv%clida\n\n", 135,198,160);

        flush_in();

        main();
    }

    return 0;

}

void CtoF() {
    float temp, F;

    printf("\nDigite a temperatura em Celsius:\n");
    scanf_s("%f", &temp);

    if (temp < -5000000 || temp > 5000000) {
        printf("\nValor inv%clido\n\n",160);

        system("pause");

        flush_in();

        main();
    }

    F = 1.8 * temp + 32;

    printf("\nA temperatura em Fahrenheit %c: %.2fF\n\n",130,F);

    system("pause");
    main();
}


void FtoC() {
    float temp, C;
    double tempDouble;

    printf("\nDigite a temperatura em Fahrenheit:\n");
    scanf_s("%f", &temp);

    if (temp < -5000000 || temp > 5000000) {

        printf("\nValor inv%clido\n\n", 160);

        system("pause");

        flush_in();

        main();
    }

    tempDouble = temp;

    C = (tempDouble - 32) / 1.8;

    printf("\nA temperatura em Celsius %c: %.2fC\n\n",130,C);

    system("pause");
    main();
}

void MtoKm() {
    float dist, Km;

    printf("\nDigite a medida em Milhas:\n");
    scanf_s("%f", &dist);

    if (dist < 0 || dist > 5000000) {

        printf("\nValor inv%clido\n\n", 160);

        system("pause");

        flush_in();

        main();
    }

    Km = dist * 1.60934;

    printf("\nA medida em Quil%cmetros %c: %.2fKm\n\n",147,130,Km);

    system("pause");
    main();
}

void KmtoM() {
    float dist, M;

    printf("\nDigite a medida em Quil%cmetros:\n",147);
    scanf_s("%f", &dist);

    if (dist < 0 || dist > 5000000) {

        printf("\nValor inv%clido\n\n", 160);

        system("pause");

        flush_in();

        main();
    }

    M = dist / 1.60934;

    printf("\nA medida em Milhas %c: %.2fMi\n\n",130,M);

    system("pause");

    main();
}