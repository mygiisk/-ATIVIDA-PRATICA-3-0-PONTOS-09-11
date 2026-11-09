#include <stdio.h>

int main() {
int senha, senhaDigitada;
int opcao;
float saldo = 500.00;
float valor;
float maiorDeposito = 0.00;

    
    printf("Crie uma senha numerica de 4 digitos: ");
    scanf("%d", &senha);

    while (senha < 1000 || senha > 9999) {
        printf("Senha invalida! Digite uma senha de 4 digitos: ");
        scanf("%d", &senha);
    }

    printf("\nSenha cadastrada com sucesso!\n");

    do {

        printf("\n---------- MENU DO BANCO ----------\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Consultar Saldo e Estatisticas\n");
        printf("4 - Sair\n");
        printf("-------------------------------------\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            
            case 1:

            	printf("\nDigite o valor do deposito: R$ ");
                scanf("%f", &valor);

                if (valor <= 0) {

                    printf("Valor invalido!\n");

                } else {

                    saldo = saldo + valor;

                    printf("Deposito realizado com sucesso!\n");

                    // Atualiza o maior deposito
                    if (valor > maiorDeposito) {
                        maiorDeposito = valor;
                    }

                    printf("Saldo atual: R$ %.2f\n", saldo);
                }

                break;

            case 2:

                printf("\nDigite sua senha: ");
                scanf("%d", &senhaDigitada);

                if (senhaDigitada != senha) {

                    printf("Senha Incorreta! Operacao cancelada.\n");

                } else {

                    printf("Digite o valor do saque: R$ ");
                    scanf("%f", &valor);

                    if (valor <= 0) {

                        printf("Valor invalido!\n");

                    } else if (valor > saldo) {

                        printf("Saldo Insuficiente!\n");

                    } else {

                        saldo = saldo - valor;

                        printf("Saque realizado com sucesso!\n");
                        printf("Saldo restante: R$ %.2f\n", saldo);
                    }
                }

                break;

            case 3:

                printf("\n========== EXTRATO ==========\n");

                printf("Saldo atual: R$ %.2f\n", saldo);

                printf("Maior deposito realizado: R$ %.2f\n",
                       maiorDeposito);

                printf("=============================\n");

                break;

            case 4:

                printf("\nObrigado por usar nosso banco!\n");

                break;

            default:

                printf("\nOpcao invalida! Tente novamente.\n");

        }

    } while (opcao != 4);

    return 0;
}
