#include <stdio.h>

void Soma(int num1, int num2){

    int soma;

    if (num1 < num2) {
        for (int i = num1 + 1; i < num2; i++)
        {
            soma += i;
        }
        printf("Soma: %d", soma);
    }
    else
    {
        for (int i = num2 + 1; i < num1; i++)
        {
            soma += i;
        }
        printf("Soma: %d", soma);
    }

}

int main(){

    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    Soma(num1, num2);

    return 0;
}