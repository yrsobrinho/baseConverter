#include <stdio.h>

void decimalToBinary(int num);

int main() {
    int selectConversion, selectBase, inputNum;

    printf("********************************\n");
    printf("*      CONVERSAO DE BASES      *\n");
    printf("********************************\n\n");

    printf("1%c PASSO: Qual a base atual do numero que deseja converter?\n\n", 167);

    printf("1. Binario\n");
    printf("2. Octal\n");
    printf("3. Decimal\n");
    printf("4. Hexadecimal\n\n");

    do {
        printf("Resposta: ");
        scanf("%d", &selectBase);
    } while (selectBase < 1 || selectBase > 4);

    printf("\n2%c PASSO: Qual o numero que deseja converter na base selecionada acima?\n\nResposta: ", 167);
    scanf("%d", &inputNum);

    switch (selectBase) {
        case 1:
            printf("\n3%c PASSO: Para qual base deseja converter o numero informado?\n\n", 167);
            printf("1. Octal\n");
            printf("2. Decimal\n");
            printf("3. Hexadecimal\n\n");

            do {
                printf("Resposta: ");
                scanf("%d", &selectConversion);
            } while (selectConversion < 1 || selectConversion > 3);



            switch (selectConversion) {
                case 1:
                    printf("\nConversao selecionada: Binario para octal\n");
                    break;
                case 2:
                    printf("\nConversao selecionada: Binario para decimal\n");
                    break;
                case 3:
                    printf("\nConversao selecionada: Binario para hexadecimal\n");
                    break;
                default:
                    printf("Operacao invalida.");
            }

            break;

        case 2:
            printf("\n3%c PASSO: Para qual base deseja converter o numero informado?\n\n", 167);
            printf("1. Binario\n");
            printf("2. Decimal\n");
            printf("3. Hexadecimal\n\n");

            do {
                printf("Resposta: ");
                scanf("%d", &selectConversion);
            } while (selectConversion < 1 || selectConversion > 3);

            switch (selectConversion) {
                case 1:
                    printf("\nConversao selecionada: Octal para binario\n");
                    break;
                case 2:
                    printf("\nConversao selecionada: Octal para decimal\n");
                    break;
                case 3:
                    printf("\nConversao selecionada: Octal para hexadecimal\n");
                    break;
                default:
                    printf("Operacao invalida.");
            }

            break;

        case 3:
            printf("\n3%c PASSO: Para qual base deseja converter o numero informado?\n\n", 167);
            printf("1. Binario\n");
            printf("2. Octal\n");
            printf("3. Hexadecimal\n\n");

            do {
                printf("Resposta: ");
                scanf("%d", &selectConversion);
            } while (selectConversion < 1 || selectConversion > 3);

            switch (selectConversion) {
                case 1:
                    printf("\nConversao selecionada: Decimal para binario\n\n");
                    printf("O numero %d corresponde em binario a ", inputNum);
                    decimalToBinary(inputNum);
                    break;

                case 2:
                    printf("\nConversao selecionada: Decimal para octal\n");
                    break;

                case 3:
                    printf("\nConversao selecionada: Decimal para hexadecimal\n");
                    break;
                default:
                    printf("Operacao invalida.");
            }

            break;

        case 4:
            printf("\n3%c PASSO: Para qual base deseja converter o numero informado?\n\n", 167);
            printf("1. Binario\n");
            printf("2. Octal\n");
            printf("3. Decimal\n\n");

            do {
                printf("Resposta: ");
                scanf("%d", &selectConversion);
            } while (selectConversion < 1 || selectConversion > 3);

            switch (selectConversion) {
                case 1:
                    printf("\nConversao selecionada: Hexadecimal para binario\n");
                    break;

                case 2:
                    printf("\nConversao selecionada: Hexadecimal para octal\n");
                    break;

                case 3:
                    printf("\nConversao selecionada: Hexadecimal para decimal\n");
                    break;

                default:
                    printf("Operacao invalida.");
            }

            break;

        default:
            printf("Operacao invalida.");
    }
}

void decimalToBinary(int num) {

    if (num == 0) {
        printf("0");
        return;
    }

    int binaryNum[32];

    int i=0;
    while (num > 0) {
        binaryNum[i++] = num % 2;
        num /= 2;
    }

    for (int j = i-1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
