#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void binaryToOctal(int num);

void binaryToDecimal(int num);

void binaryToHexadecimal(int num);

void decimalToBinary(int num);

void decimalToOctal(int num);

void decimalToHexadecimal(int num);

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
                    printf("O numero %d corresponde em octal a ", inputNum);
                    binaryToOctal(inputNum);

                    break;
                case 2:
                    printf("\nConversao selecionada: Binario para decimal\n");
                    printf("O numero %d corresponde em decimal a ", inputNum);
                    binaryToDecimal(inputNum);

                    break;
                case 3:
                    printf("\nConversao selecionada: Binario para hexadecimal\n");
                    printf("O numero %d corresponde em hexadecimal a ", inputNum);
                    binaryToHexadecimal(inputNum);

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
                    printf("O numero %d corresponde em octal a ", inputNum);
                    decimalToOctal(inputNum);

                    break;

                case 3:
                    printf("\nConversao selecionada: Decimal para hexadecimal\n");
                    printf("O numero %d corresponde em hexadecimal a ", inputNum);
                    decimalToHexadecimal(inputNum);

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

void binaryToOctal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int octalNum[100], binaryDigit, weight, j = 0, i, k;

    while (num > 0) {
        weight = 1;
        for (i = 0; i < 3; i++) {
            binaryDigit = num % 10;
            octalNum[j] += binaryDigit * weight;
            num /= 10;
            weight *= 2;
        }
        j++;
    }
    for (k = j - 1; k >= 0; k--) {
        decimalToOctal(octalNum[k]);
    }
}

void binaryToDecimal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int decimalNum = 0;

    int i = 1, moduleOfTen;
    while (num > 0) {
        moduleOfTen = num % 10;
        decimalNum += moduleOfTen * i;
        num /= 10;
        i *= 2;

    }
    printf("%d", decimalNum);
}

void binaryToHexadecimal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int hexadecimalNum[100], binaryDigit, weight, j = 0;

    while (num > 0) {
        weight = 1;
        int hexDigit = 0;
        for (int i = 0; i < 4; i++) {
            binaryDigit = num % 10;
            hexDigit += binaryDigit * weight;
            num /= 10;
            weight *= 2;
        }
        hexadecimalNum[j] = hexDigit;
        j++;
    }
    for (int k = j - 1; k >= 0; k--) {
        decimalToHexadecimal(hexadecimalNum[k]);
    }
}

void decimalToBinary(int num) {

    if (num == 0) {
        printf("0");
        return;
    }

    int binaryNum[100];

    int i = 0;
    while (num > 0) {
        binaryNum[i++] = num % 2;
        num /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

void decimalToOctal(int num) {

    if (num == 0) {
        return;
    }

    int octalNum[100];

    int i = 0;
    while (num > 0) {
        octalNum[i++] = num % 8;
        num /= 8;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}

void decimalToHexadecimal(int num) {

    if (num == 0) {
        printf("0");
        return;
    }

    char hexaNum[100];

    int i = 0, moduleOfSixteen = num % 16;
    while (num > 0) {
        if (moduleOfSixteen == 10) {
            hexaNum[i++] = 'A';
        } else if (moduleOfSixteen == 11) {
            hexaNum[i++] = 'B';
        } else if (moduleOfSixteen == 12) {
            hexaNum[i++] = 'C';
        } else if (moduleOfSixteen == 13) {
            hexaNum[i++] = 'D';
        } else if (moduleOfSixteen == 14) {
            hexaNum[i++] = 'E';
        } else if (moduleOfSixteen == 15) {
            hexaNum[i++] = 'F';
        } else {
            itoa(moduleOfSixteen, hexaNum + i, 10);
            i += strlen(hexaNum + i);
        }
        num /= 16;
        moduleOfSixteen = num % 16;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexaNum[j]);
    }
}

