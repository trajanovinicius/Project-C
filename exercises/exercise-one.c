/* Desenvolva um algoritmo que solicite ao usuário dois números inteiros.
Imprima a soma destes dois números na tela. */

#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int x, y, res;                // definindo todas as variáveis que vou utilizar
  printf("Digite um valor:\n"); // mostrando uma mensagem para o usuário
  scanf("%i", &x);              // recebendo o valor de x, passando três argumentos para o scanf("tipo da variável", &variável)

  printf("Digite um segundo valor:\n");
  scanf("%i", &y);

  res = x + y;                                                 // somando os valores recebidos
  printf("O resultado da soma de %i com %i é %i.", x, y, res); // mostrando o resultado com uma frase

  return 0;
}