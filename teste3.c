#include <stdio.h>

int main(){

int num1 = 40, num2 = 60;
int maior;

num1 > num2 ? (maior = num1) : (maior = num2);

if (num1 > num2)
{
    printf("O numero maior é %d", num1);
} else {
    printf("O número maior é %d", num2);
}


return 0;
}