#include <stdio.h> // chamando um header do C que eu consigo chamar funcoes especificas como ex: printf e scanf
#include <stdlib.h> // chamando um header do C que eu consigo chamar funcoes especificas como ex: malloc e free

int Verificacao(int n) {
  return n % 2 == 0;
} // Função que verifica se o valor é par.

int main(void) {

  /*
         * Criando um ponteiro para os valores p e f:
              - está criando um ponteiro para armazenar os valores de p e f.
                Isso permitirá que você acesse e manipule esses valores
     posteriormente.
  */
  int *p = malloc(sizeof(int));
  int *f = malloc(sizeof(int));
  int pares = 0; // Esta variável armazenará a quantidade de valores pares.

  printf("Digite um valor inicial: ");
  scanf("%d", p); // Aqui é onde o cliente irá colocar o primeiro valor.

  printf("Digite um valor final: ");
  scanf("%d", f); // Aqui é onde o cliente irá colocar o valor final.

  /*
    Aqui ele irá adicionar 1 em 1 até chegar no valor final que o cliente
    colocou. Ex: Cliente colocou 2 como valor primario e 12 como valor final,o
    for irá atribuindo de 1 em 1 dessa forma: 2, 3, 4, 5... ate chegar o numero
    final.
  */
  for (int i = *p; i <= *f; i++) {

    /*
      O 'if' está verificando se cada número que foi incrementado é par ou
      ímpar.
    */
    if (Verificacao(i)) {
      printf("-------------------------- \n");
      printf("   %d É um número par..\n", i);
      printf("-------------------------- \n");
      pares++;
    } else {
      printf("-------------------------- \n");
      printf("   %d É um número ímpar..\n", i);
      printf("-------------------------- \n");
    }
  }

  printf("------------------------------------------------\n");
  printf("   Total de números pares encontrados: %d\n",
         pares); // Mostrando a quantidade de pares encontrados
  printf("------------------------------------------------\n");

  // Liberando a memoria que foi aberta pelo malloc
  free(p);
  free(f);

  return 0;
}
