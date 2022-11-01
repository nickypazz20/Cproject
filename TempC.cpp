#include <stdio.h>
#include <stdlib.h>

int main() {

    float Ftemp, Ctemp;
    
    printf("Digite temperatura em graus Celsius: ");
    scanf("%f" ,&Ctemp);
     
    Ftemp = Ctemp * 9/5 + 32 ;
    printf("\n Temperatura em graus Fahrenheit e %.2f \n", Ftemp);
    return 0;

}
