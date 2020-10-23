#include <stdio.h>

struct Agenda {
    char nome[50];
    char endereco[100];
    long int telefone;
    char situacao[1];
};

void RegistraContato(struct Agenda *registroAgenda){
  printf("Qual o nome: ");
  scanf("%s", registroAgenda->nome);

  printf("endereco: ");
  scanf("%s", registroAgenda->endereco);

  printf("telefone: ");
  scanf("%ld", &registroAgenda->telefone); 

  printf("situacao: ");
  scanf("%s", registroAgenda->situacao);
}

void ImprimeContato(struct Agenda contato){
  printf("Nome: %s\n",contato.nome);
  printf("Endereco: %s\n",contato.endereco);
  printf("Telefone: %ld\n",contato.telefone);
  printf("Situacao: %s\n",contato.situacao);
}

int main(){
  struct Agenda contato;

  RegistraContato(&contato);

  ImprimeContato(contato);

  return 0;
}