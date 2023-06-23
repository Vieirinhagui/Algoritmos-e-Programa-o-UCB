#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  char usuario[20];
  char senha[20];
  char usuario_correto[] = "teste123";
  char senha_correto[] = "teste123";

  puts("Por favor, digite seu nome de usuário:");
  gets(usuario);

  puts("Por favor, digite sua senha:");
  gets(senha);
  if (strcmp(usuario, usuario_correto) == 0 &&
      strcmp(senha, senha_correto) == 0) {
    puts("Login bem-sucedido!");
    char nome[50];
    char email[50];
    char telefone[20];
    char semestre[10];

    puts("Por favor, digite seu nome:");
    gets(nome);
    if (strlen(nome) > 50) {
      puts("Erro: Nome é muito longo.");
      return 1;
    }

    puts("Por favor, digite seu e-mail:");
    gets(email);
    if (strlen(email) > 50) {
      puts("Erro: E-mail é muito longo.");
      return 1;
    }

    puts("Por favor, digite seu telefone:");
    gets(telefone);
    if (strlen(telefone) > 20) {
      puts("Erro: Telefone é muito longo.");
      return 1;
    }

    puts("Por favor, digite seu semestre atual:");
    gets(semestre);
    if (strlen(semestre) > 10) {
      puts("Erro: Semestre é muito longo.");
      return 1;
    }

    puts("Obrigado por enviar suas informações de contato!");
    printf("Nome: %s\n", nome);
    printf("E-mail: %s\n", email);
    printf("Telefone: %s\n", telefone);
    printf("Semestre: %s\n", semestre);
  } else {
    puts("Nome de usuário ou senha incorretos. Por favor, tente novamente.");
  }

  return 0;
}
