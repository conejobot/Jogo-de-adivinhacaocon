#include <stdio.h>

int main(){
    int num;
    int calc;

    printf("Digite um número para a tabuada: ");
    scanf("%d", &num);

    for (int i = 0;i <=  10; i++){
        calc = num * i;
        printf("%d x %d = %d\n",num,i,calc);
    }
    return 0;
}