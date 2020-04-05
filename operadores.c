

#include <iostream>


using namespace std;

int main()
{
    //Declaração de variaveis
    int op;
    float n1, n2, resultado;
    
    //Texto impresso na tela para o usuario
    printf("Informe o primeiro valor a ser calculado: \n");
    //Armazenamento em memoria do valor solicitado
    scanf("%f", &n1);
    
    printf("Informe o segundo valor a ser calculado: \n");
    scanf("%f", &n2);
    
    printf("Informe o operador para realizar o calculo: \n");
    printf("1 - Para Somar \n");
    printf("2 - Para Subtrair \n");
    printf("3 - Para Multiplicar \n");
    printf("4 - Para Dividir \n");
    scanf("%i", &op);
    
    if(op == 1){
        resultado = n1 + n2;    
    }else if(op == 2){
        resultado = n1 - n2;    
    }else if(op == 3){
        resultado = n1 * n2;    
    }else if(op == 4){
        resultado = n1 / n2;    
    }else{
        printf("Opção Invalida");
        return false;
    }
    
    //Atribuição da soma dos valores a variavel 
    //resultado = n1 + n2;
    
    //printf("A soma de %f + %f = %f", n1, n2, resultado);
    printf("Resultado: %.2lf", resultado);
}

