#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
float v[];


float somaArr(float arr[]){
    float soma = 0;
    int i = 0;
    while(arr[i] != 0){
        soma += arr[i];
        i++;
    }
    return soma;
}
float scanValor(){
    static int i = 1;
    float x;
    printf("\nDigite o valor %i: ", i);
    scanf("%f", &x);
    i++;
    return x;
}
void scanTodosValores(){
    bool flag = false;
    while(!flag){
        static int i = 0;
        v[i] = scanValor();
        if(v[i] == 0){
            flag = true;
        }
        i++;
    }
}



int main(){
    setlocale(LC_ALL, "");
    printf("Digite varios valores a serem somados\nPara sair digite 0\n");
    scanTodosValores();
    float soma = somaArr(v);
    printf("A soma é: %.2f", soma);

    return 0;
}
