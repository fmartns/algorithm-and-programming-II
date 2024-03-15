#include <iostream>
using namespace std;

void imprimirArrayV1(int array[5]){
    cout << "imprimindo array V1 " << endl;
    for(int i = 0; i<5; i++){
        cout << array[i] << " ";
    }
    cout << endl;   
}

void imprimirArrayV2(double array[],int tam){
    cout << "imprimindo array V2 " << endl;
    for(int i = 0; i<tam; i++){
        cout << array[i] << " ";
    }
    cout << endl;   
}

void dobrarElementos(int array[], int tam){
    cout << "dobrando o valor dos elementos do array" << endl;
    for(int i =0; i< tam; i++){
        array[i] *= 2;
    }
    cout << endl;
}

void preencherArray(int array[], int tam){
    for(int i = 0; i< tam ; i++){
        cout << "qual valor a ser inserido na posição " << i << endl;
        cin >> array[i];
    }
}
int somarElementos(int array[], int tam){
    int soma = 0;
    for(int i = 0; i< tam; i++){
       soma += array[i];
    }
    return soma;
}
double calcularMedia(int array[], int tam){
    int soma = somarElementos(array,tam);
    double media = soma/tam;
    return media;
}
int encontrarMenorElemento(int array[], int tam){
    int menor = array[0];
    for(int i = 1; i<tam; i++){
        if(array[i] < menor){
            menor = array[i];
        }
    }
    return menor;
}
int main()
{   double alturas [4] = {1.9,1.85,1.55,1.72};
    int tam = 5;
    int numeros[tam] = {1,2,3,4,5};
    imprimirArrayV1(numeros);
    int soma = somarElementos(numeros,tam);
    double media = calcularMedia(numeros,tam);
    int menorElemento = encontrarMenorElemento(numeros,tam);
    
    cout << "soma = " << soma << endl;
    cout << "média = " << media << endl;
    cout << "menor elemento = " << menorElemento << endl;
}
