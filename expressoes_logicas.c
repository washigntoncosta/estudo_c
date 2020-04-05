
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    float n1, n2;
    int tamanhodafrase;
    char resultado[100] = "";
    
    printf("Informe o primeiro valor a ser calculado: \n");
    scanf("%f", &n1);
    
    printf("Informe o segundo valor a ser calculado: \n");
    scanf("%f" , &n2);
    
    if(n1 == n2){
        strcat(resultado, "- Valores Iguais \n");
    }else{
        strcat(resultado, "- Valores Diferentes \n");
    }
    
    if(n1 > n2){
        strcat(resultado, "- O primeiro valor é maior que o segundo \n");
    }else{
        strcat(resultado, "- O primeiro valor é menor que o segundo \n");
    }
    
    tamanhodafrase = strlen(resultado);
    
    printf("%s \n",resultado);
    printf("O tamanho da minha frase final tem %i caracteres", tamanhodafrase);
}

