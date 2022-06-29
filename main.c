#include <stdio.h> //sempre incluir uma biblioteca para iniciar um projeto em C
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  printf("Olá mundo!\n"); // \n usado para colocar quebra de linhas

  return 0;
}
// tudo que estiver dentro das chaves, é o nosso delimitador do programa principal.