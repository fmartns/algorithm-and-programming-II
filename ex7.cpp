#include <iostream>

using namespace std;

double calcularVariancia(double array[], int tamanho){
    
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
    
    return variancia;
}    
    

int main()
{
    
    int tam = 5;
    double array[tam] = {1, 1, 3, 1, 5};

    double var = calcularVariancia(array, tam);
    
    cout << "Resultado variância: " << var;

    return 0;
}