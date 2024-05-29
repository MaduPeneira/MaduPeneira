#include <stdio.h>


int main() 

{
    int tempoDeEmpresa;
    float salario, salarioComAumento;
    
    printf("Digite seu tempo de empresa : ");
    scanf("%d" , &tempoDeEmpresa);
    
    printf("Insira seu salario atual:");
    scanf("%f", &salario);
    
   {
	
    if(tempoDeEmpresa < 5 && salario> 2000);
    salarioComAumento = (salario/100) * 20;
    printf("Voce recebeu um aumento de: 20%\n");
    printf("Parabens seu salario recebeu um aumento de %.2f\n", salarioComAumento);}

	
return 0;
}