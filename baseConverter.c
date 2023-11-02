#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


// SISTEMA OPERACIONAL: Windows & COMPILADOR: MinGW

int isValidDigit(int digit, int base);

int isValidNumber(int number, int base);

int isHexaDigit(char digit);

int isValidHexadecimal(char *hexaNum);

void binaryToOctal(int num);

void binaryToDecimal(int num);

void binaryToHexadecimal(int num);

void octalToBinary(int num);

void octalToDecimal(int num);

void octalToHexadecimal(int num);

void decimalToBinary(int num);

void decimalToOctal(int num);

void decimalToHexadecimal(int num);

void hexadecimalToBinary(char hexaNum[]);

void hexadecimalToOctal(char hexaNum[]);

void hexadecimalToDecimal(char hexaNum[]);

void clearScreen();

int main() {
    int selectConversion, selectBase, inputNum, answer = 1;
    char inputHexa[100];

    do {
        clearScreen();
        printf("\n********************************\n");
        printf("*      CONVERSAO DE BASES      *\n");
        printf("********************************\n\n");

        printf("1. Binario\n");
        printf("2. Octal\n");
        printf("3. Decimal\n");
        printf("4. Hexadecimal\n\n");

        do {
            printf("1%c PASSO: Qual a base atual do numero que deseja converter?\n\nResposta: ", 167);
            scanf("%d", &selectBase);
        } while (selectBase < 1 || selectBase > 4);

        if (selectBase != 4) {
            do {
                printf("\n2%c PASSO: Qual o numero que deseja converter na base selecionada acima?\n\nResposta: ", 167);
                if (scanf("%d", &inputNum) != 1 || !isValidNumber(inputNum, selectBase)) {
                    printf("\nATENCAO: Entrada invalida. Insira um numero valido.\n");
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                } else
                    break;
            } while (1);;
        } else {
            do {
                printf("\n2%c PASSO: Qual o numero que deseja converter na base selecionada acima?\n\nResposta: ", 167);
                scanf("%s", inputHexa);
            } while (!isValidHexadecimal(inputHexa));
        }

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
                        printf("\nConversao selecionada: Binario para octal\n\n");
                        printf("O numero %d corresponde em octal a ", inputNum);
                        binaryToOctal(inputNum);

                        break;
                    case 2:
                        printf("\nConversao selecionada: Binario para decimal\n\n");
                        printf("O numero %d corresponde em decimal a ", inputNum);
                        binaryToDecimal(inputNum);

                        break;
                    case 3:
                        printf("\nConversao selecionada: Binario para hexadecimal\n\n");
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
                        printf("\nConversao selecionada: Octal para binario\n\n");
                        printf("O numero %d corresponde em binario a ", inputNum);
                        octalToBinary(inputNum);
                        break;
                    case 2:
                        printf("\nConversao selecionada: Octal para decimal\n\n");
                        printf("O numero %d corresponde em decimal a ", inputNum);
                        octalToDecimal(inputNum);
                        break;
                    case 3:
                        printf("\nConversao selecionada: Octal para hexadecimal\n\n");
                        printf("O numero %d corresponde em hexadecimal a ", inputNum);
                        octalToHexadecimal(inputNum);
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
                        printf("\nConversao selecionada: Decimal para octal\n\n");
                        printf("O numero %d corresponde em octal a ", inputNum);
                        decimalToOctal(inputNum);

                        break;

                    case 3:
                        printf("\nConversao selecionada: Decimal para hexadecimal\n\n");
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
                        printf("\nConversao selecionada: Hexadecimal para binario\n\n");
                        printf("O numero %s corresponde em binario a ", inputHexa);
                        hexadecimalToBinary(inputHexa);
                        break;

                    case 2:
                        printf("\nConversao selecionada: Hexadecimal para octal\n\n");
                        printf("O numero %s corresponde em octal a ", inputHexa);
                        hexadecimalToOctal(inputHexa);
                        break;

                    case 3:
                        printf("\nConversao selecionada: Hexadecimal para decimal\n\n");
                        printf("O numero %s corresponde em decimal a ", inputHexa);
                        hexadecimalToDecimal(inputHexa);
                        break;

                    default:
                        printf("Operacao invalida.");
                }

                break;

            default:
                printf("Operacao invalida.");
        }

        do {
            printf("\n\nDeseja realizar outra conversao? (1. SIM / 0. NAO)\n\nResposta: ");
            scanf("%d", &answer);
        } while (answer != 0 && answer != 1);

    } while (answer == 1);

}

int isValidDigit(int digit, int base) {

    if (base == 1) {
        return digit == 0 || digit == 1;
    } else if (base == 2) {
        return digit >= 0 && digit <= 7;
    } else if (base == 3) {
        return digit >= 0 && digit <= 9;
    } else {
        return 0;
    }
}

int isValidNumber(int number, int base) {
    while (number > 0) {
        int digit = number % 10;
        if (!isValidDigit(digit, base)) {
            return 0;
        }
        number /= 10;
    }
    return 1;
}

int isHexaDigit(char digit) {
    return (digit >= '0' && digit <= '9') || (digit >= 'A' && digit <= 'F') || (digit >= 'a' && digit <= 'f');
}

int isValidHexadecimal(char *hexaNum) {

    if (hexaNum == NULL || hexaNum[0] == '\0') {
        return 0;
    }

    for (int i = 0; hexaNum[i] != '\0'; i++) {
        if (!isHexaDigit(hexaNum[i])) {
            printf("\nATENCAO: O numero inserido possui elementos invalidos para a base selecionada. Por favor, insira um numero valido.\n");
            fflush(stdin);
            return 0;
        }
    }
    return 1;
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

void octalToDecimal(int num) {
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
        i *= 8;
    }
    printf("%d", decimalNum);
}

void octalToBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int binaryNum[100], octalDigit, weight, j = 0, i, k;

    while (num > 0) {
        weight = 1;
        for (i = 0; i < 3; i++) {
            octalDigit = num % 10;
            binaryNum[j] += octalDigit * weight;
            num /= 10;
            weight *= 8;
        }
        j++;
    }
    for (k = j - 1; k >= 0; k--) {
        decimalToBinary(binaryNum[k]);
    }
}

void octalToHexadecimal(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int hexadecimalNum[100], octalDigit, weight, j = 0;

    while (num > 0) {
        weight = 1;
        int hexDigit = 0;
        for (int i = 0; i < 4; i++) {
            octalDigit = num % 10;
            hexDigit += octalDigit * weight;
            num /= 10;
            weight *= 8;
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

void hexadecimalToBinary(char hexaNum[]) {
    if (hexaNum[0] == '0') {
        printf("0");
    }

    int binaryNum[100];
    int hexaDigit, j = 0, i, k;

    for (i = strlen(hexaNum) - 1; i >= 0; i--) {
        char digit = hexaNum[i];

        if (digit >= '0' && digit <= '9') {
            hexaDigit = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            hexaDigit = digit - 'A' + 10;
        }

        for (k = 0; k < 4; k++) {
            binaryNum[j++] = hexaDigit % 2;
            hexaDigit /= 2;
        }
    }

    for (k = j - 1; k >= 0; k--) {
        printf("%d", binaryNum[k]);
    }
    printf("\n");
}

void hexadecimalToOctal(char hexaNum[]) {
    int decimalNum = 0, i, weight = 1;

    for (i = strlen(hexaNum) - 1; i >= 0; i--) {
        char digit = hexaNum[i];

        if (digit >= '0' && digit <= '9') {
            decimalNum += (digit - '0') * weight;
        } else if (digit >= 'A' && digit <= 'F') {
            decimalNum += (digit - 'A' + 10) * weight;
        }
        weight *= 16;
    }

    decimalToOctal(decimalNum);
}

void hexadecimalToDecimal(char hexaNum[]) {
    if (hexaNum[0] == '0') {
        printf("0");
    }

    int decimalNum = 0, i, weight = 1;

    for (i = strlen(hexaNum) - 1; i >= 0; i--) {
        char digit = hexaNum[i];

        if (digit >= '0' && digit <= '9') {
            decimalNum += (digit - '0') * weight;
        } else if (digit >= 'A' && digit <= 'F') {
            decimalNum += (digit - 'A' + 10) * weight;
        }
        weight *= 16;
    }

    printf("%d\n", decimalNum);
}

void clearScreen() {
    system("cls");
}