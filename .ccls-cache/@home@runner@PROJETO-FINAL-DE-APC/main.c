//programa que calcula entre a gasolina e o etanol, qual compena mais.

#include <stdio.h>
int main() {
int gasolina, etanol;
int vgas = 0;
int veta = 0;
    printf("#### CALC ECO ####\n\n");
    printf("Devs: Guilherme Vieira and Gabriel Emidio\n\n");
    printf("Olá, esse programa calcula qual combustível é mais vantajoso abastecer.\n\n");
  
  int opcao;{
    //menu principal contendo opcao de iniciar e encerrar programa
    while (1) {
    printf("MENU PRINCIPAL\n\n");
    printf("1 - Calcular\n\n");
    printf("2 - Encerrar\n\n");

    printf("Escolha uma opcao:\n\n");
      
    int opcao;
    int leu_certo = scanf(" %d", &opcao);
    
    switch (opcao) {
      case 1: 
  //calculo da vantagem 
        
  printf("Digite o valor da gasolina:\n\n ");
  scanf("%i", &gasolina);
  printf("Digite o valor do etanol:\n\n ");
  scanf("%i", &etanol);
  // o calculo da gasolina x 70%, tem que ser menor do que o valor do etanol pra compensar abastecer com gasolina.
  int calcular;
        calcular = (gasolina * 0.7);
  if((gasolina * 0.70f) < etanol) {
  printf("Compensa abastecer com gasolina!\n\n");

  } else if ((gasolina * 0.70f) > etanol) {
  printf("Compensa abastecer com etanol!\n\n"); 
  }else {
  printf("Compensa abastecer com qualquer um dos dois!\n\n");}
  break;
  

    case 2: 
      printf("Programa encerrado.\n");
      return 0; //Encerra o programa
      default:;
    }
    }
  }
  return 0;
}