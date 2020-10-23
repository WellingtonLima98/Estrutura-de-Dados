#include <stdio.h>
#include <string.h>

struct Agenda {
    char nome[50];
    char endereco[100];
    char situacao[1];
    long int telefone;
};

void Registrar(struct Agenda *contato) {
    printf("\nDigite o nome: ");
    scanf("%s", contato->nome);

    printf("Endereco: ");
    scanf("%s", contato->endereco);

    printf("Telefone: ");
    scanf("%ld", &contato->telefone);

    printf("Situacoes:\nL - Livre;\nX - Ocupado;\n* - Apagado.\nDigite aqui -> ");
    scanf("%s", contato->situacao);
}

void ImprimeContato(struct Agenda contato) {
    printf("\nNome: %s", contato.nome);
    printf("Endereco: %s", contato.endereco);
    printf("Telefone: %ld", contato.telefone);
    printf("Situacao: %s", contato.situacao);
}

int main() {
    int i, opcao = 1, quantidadeRegistros = 5, aux, numeroRegistro;
    struct Agenda contato[quantidadeRegistros], escolhaNome;

    printf("==================== MENU ====================\n");
    printf("1 - Inserir os 5 registros;\n");
    printf("2 - Pesquisar um dos 5 registros de cada vez pelo campo nome;\n");
    printf("3 - Alterar campos de um registro;\n");
    printf("0 - Sair do programa de cadastro.\n");
    printf("==============================================\n");

    while(opcao != 0) {
        printf("Qual sua escolha -> ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            for(i = 0; i < quantidadeRegistros; i++) {
                Registrar(&contato[i]);
            }
        break;
        case 2:
            printf("Diggite nome: ");
            scanf("%s", escolhaNome.nome);

            for(i = 0; i < quantidadeRegistros; i++) {
                if(strcmp(escolhaNome.nome, contato[i].nome)) {
                    ImprimeContato(contato[i]);
                    break;
                }
            }
        break;
        case 3:
            printf("Informe o numero do registo [0-4]: ");
            scanf("%d", &numeroRegistro);

            printf("=============== O QUE VOCE DESEJA ALTERAR ===============\n");
            printf("0 - Nome;\n1 - Endereco;\n2 - Telefone;\n3 - Situacao.\nDigite sua escolha -> ");
            scanf("%d", &aux);
            printf("\n=========================================================\n");

            switch (aux) {
            case 0:
                printf("\nDigite o nome: ");
                scanf("%s", contato[numeroRegistro].nome);
            break;
            case 1:
                printf("\nDigite o endereco: ");
                scanf("%s", contato[numeroRegistro].endereco);
            break;
            case 2:
                printf("\nDigite o telefone: ");
                scanf("%ld", &contato[numeroRegistro].telefone);
            break;
            case 3:
                printf("\nDigite a situacao: ");
                scanf("%s", contato[numeroRegistro].situacao);
            break;
            }

            ImprimeContato(contato[numeroRegistro]);
        break;
        }
    }

    return 0;
}