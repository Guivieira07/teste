
#include <stdio.h>
#include <stdlib.h>
int main() {
  
  float gasolina, etanol;
  int opcao;
  {

    // menu principal
    while (1) {
      printf("-----Supply Calc-----\n\n");
      printf("MENU PRINCIPAL\n\n");
      printf("1 - Calcular\n\n");
      printf("2 - Encerrar\n\n");
      printf("3 - Observacoes do programa\n\n");
      printf("Escolha uma opcao => ");

      int opcao;
      int leu_certo = scanf("%d", &opcao);
      char deu_certo = system("clear");
      switch (opcao) {
      case 1:
        // calculo da vantagem

        printf("Por favor digite o valor do litro da gasolina:\n\n ");
        float leu_certo = scanf("%f", &gasolina);
        printf("Digite o valor do litro do alcool:\n\n ");
        float leu_certoo = scanf("%f", &etanol);
        char deu_certo = system("clear");
        int calcular;
        calcular = (gasolina * 0.70f);
        if ((gasolina * 0.70f) < etanol) {
          printf("Compensa abastecer com gasolina!\n\n");

        } else if ((gasolina * 0.70f) > etanol) {
          printf("Compensa abastecer com etanol!\n\n");

        } else {
          printf("Compensa abastecer com qualquer um dos dois!\n\n");
        }
        // calculo da diferenca de consumo
        float diferenca = (calcular) - (etanol);
        printf("A diferenca de consumo eh de %.2f litros\n\n", diferenca);
        getchar();
        break;
      case 2:
        //encerrar programa
        printf("Programa encerrado!\n\n");
        exit(0);
        break;
  
      case 3:
        printf("Informacoes...\n\n");
        printf("O programa calcula qual combustivel é mais vantajoso "
               "abastecer.\n\n");
        printf("O metodo do calculo do programa é o seguinte: \n");
        printf("O calculo eh feito dividindo o valor da gasolina por 70 por "
               "cento\n ");
        printf("- caso o resultado seja maior que o preco maximo do etanol, eh "
               "valido abastecer com etanol.\n ");
        printf("- Caso o resultado seja menor que o preco maximo do etanol, eh "
               "valido abastecer com gasolina\n ");
        printf("- Caso o resultado seja igual ao preco maximo do etanol, voce "
               "decide! \n\n");
        printf("Pressione ENTER para retornar...\n");
        getchar();
        break;
      }
    }
  }

  return 0;
}