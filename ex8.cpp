#include <iostream>
#include <cmath>

using namespace std;

double calcularDesvioPadrao(double array[], int tamanho){
    
    double soma = 0;
    
    double arrayAtualizado[tamanho];
    
    for(int i = 0; i < tamanho; i++){
        soma = soma + array[i];
    }
    
    double media = soma / tamanho;
    
    for(int i = 0; i < tamanho; i++){
        arrayAtualizado[i] = (array[i] - media) * (array[i] - media);
    }
    
    soma = 0;
    
    for(int i = 0; i < tamanho; i++){
        soma = soma + arrayAtualizado[i];
    }
    
    double variancia = soma / tamanho;
    
    double desvioPadrao = sqrt(variancia);
    
    return desvioPadrao;
}    
    

int main()
{
    
    int tam = 5;
    double array[tam] = {1, 1, 3, 1, 5};

    double var = calcularDesvioPadrao(array, tam);
    
    cout << "Resultado do desvio padrão: " << var;

    return 0;
}