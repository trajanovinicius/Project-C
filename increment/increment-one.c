#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int x = 10;

  x++; // é igual a x + 1, ou 10 + 1

  return 0;
}