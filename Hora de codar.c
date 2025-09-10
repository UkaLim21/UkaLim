#include <stdio.h>

int main(){

unsigned int estoque, estoqueMinimo = 1000;
float temperatura, umidade;

printf("Entre com a temperatura: \n");
scanf("%f", &temperatura);
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if(temperatura > 30){
    printf("A temperatura está alta\n");
}else { 
    printf ("A temperatura está dentro dos parâmetros\n");
}

if(umidade > 50){
    printf("Umidade elevada\n");
}else { 
    printf ("A umidade está dentro dos parâmetros\n");
}

if(estoque < estoqueMinimo){
    printf("Estoque abaixo do minimo\n");
}else { 
    printf ("Estoque normal!\n");
}



return 0;
}