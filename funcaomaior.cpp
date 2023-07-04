#include<stdio.h>

int valor1, valor2, total1, total2, total3;

int soma() {
	    printf("\n\nDigite o primeiro numero :");
	    scanf ("%d", &valor1);
    	printf("Digite o segundo numero :");
    	scanf("%d", &valor2);
	    return(valor1+valor2);
    }
   
main(){
	
	printf("********1 soma ****** ");
	total1 = soma();
	printf ("A soma e %d", total1);
    
	printf("n\n ********2 soma ****** ");
	total2 = soma();
	printf ("A soma e %d", total2);	
	
	printf("\n\n ********3 soma ****** ");
	total3 = soma();
	printf ("A soma e %d", total3);	
	
	printf ("\n\nSoma total %d ", (total1 + total2 + total3));
	
	
	
}   

