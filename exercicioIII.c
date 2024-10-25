#include <stdio.h>

int main()
{
    float largura_quintal, comprimento_quintal;
    float largura_piscina, comprimento_piscina;
    float area_quintal, area_piscina, area_livre;

   // Entrada de  Dados  do quintal
   printf("Digite a largura do quintal (em metros) ");
   scanf("%f", &largura_quintal);

   printf("Digite o comprimento do quintal (em metros): ");
   scanf("%f", &comprimento_quintal);

   // Entrada de Dados piscina
   printf("Digite a largura da piscina (em metros): ");
   scanf("%f", &largura_piscina);

   printf("Digite o comprimento da piscina: ");
   scanf("%f", &comprimento_piscina);

   //Calculo 

   area_quintal = largura_quintal * comprimento_quintal;
   area_piscina = largura_piscina * comprimento_piscina;
   area_livre = area_quintal * area_piscina;

   // Saida de Dados 
   printf("Area do quintal: %.2f m²\n", area_quintal);
   printf("Area ocupada pela piscina: %.2f m²\n", area_piscina);
   printf("Area livre do quintal %.2f m²\n", area_livre);





    return 0;
}
