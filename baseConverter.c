#include <stdio.h>

int main() {
    int selectConversion, selectBase;

    printf("********************************\n");
    printf("*      CONVERSAO DE BASES      *\n");
    printf("********************************\n\n");

    printf("Base do numero que deseja converter:\n\n");

    printf("1. Binario\n");
    printf("2. Octal\n");
    printf("3. Decimal\n");
    printf("4. Hexadecimal\n");

    do {
        printf("Resposta: ");
        scanf("%d", &selectBase);
    } while (selectBase < 1 || selectBase > 4);

    switch (selectBase) {
        case 1:
            printf("\nBase para qual deseja converter:\n\n");
            printf("1. Octal\n");
            printf("2. Decimal\n");
            printf("3. Hexadecimal\n");

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
            printf("\nBase para qual deseja converter:\n\n");
            printf("1. Binario\n");
            printf("2. Decimal\n");
            printf("3. Hexadecimal\n");

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
            printf("\nBase para qual deseja converter:\n\n");
            printf("1. Binario\n");
            printf("2. Octal\n");
            printf("3. Hexadecimal\n");

            do {
                printf("Resposta: ");
                scanf("%d", &selectConversion);
            } while (selectConversion < 1 || selectConversion > 3);

            switch (selectConversion) {
                case 1:
                    printf("\nConversao selecionada: Decimal para binario\n");
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
            printf("\nBase para qual deseja converter:\n\n");
            printf("1. Binario\n");
            printf("2. Octal\n");
            printf("3. Decimal\n");

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