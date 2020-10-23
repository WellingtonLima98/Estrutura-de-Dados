
#include <stdio.h>

/*
    Considerando o registro da questão anterior, elabore um programa para armazenar o
    nome e nota de 35 alunos da disciplina Estruturas de Dados. O programa deverá
    mostrar os registros dos 35 alunos e notas.
*/

struct Aluno{
    char nome[35];
    float nota[3];
};

void Registrar(struct Aluno *registroAlunos){
    printf("Qual o nome: "); 
    scanf("%s",registroAlunos->nome);

    printf("AP1: ");
    scanf("%f", &registroAlunos->nota[0]);

    printf("AP2: ");
    scanf("%f", &registroAlunos->nota[1]);

    printf("Final: ");
    scanf("%f", &registroAlunos->nota[2]);
}

void ImprimeRegistro(struct Aluno aluno){
    printf("Nome: %s\n", aluno.nome);
    printf("AP1: %.2f\n", aluno.nota[0]);
    printf("AP2: %.2f\n", aluno.nota[1]);
    printf("Final: %.2f\n", aluno.nota[2]);
}

int main(){
    int numeroAlunos = 35, i;
    struct Aluno registro[numeroAlunos];

    for(i = 0; i < numeroAlunos; i++){
        Registrar(&registro[i]);
        puts("\n");  
    }

    for(i = 0; i < numeroAlunos; i++){
        ImprimeRegistro(registro[i]);
        puts("\n");
        setbuf(stdin,NULL);
    }

    return 0;
}