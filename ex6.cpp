#include <iostream>

using namespace std;

void inverterArray(int array[], int tamanho){
    
    int arrayInvertido[tamanho];
    
    int x = tamanho-1;
    int y = 0;
    
    while(y < 5){
        arrayInvertido[y] = array[x];
        x = x - 1;
        y = y + 1;
    }
    
    cout << "Array invertido: {";
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho-1){
            cout << arrayInvertido[i] << "}";
        } else {
            cout << arrayInvertido[i] << ", ";
        }
    }

}

int main()
{
    
    int tam = 5;
    int array[tam] = {1, 1, 3, 1, 5};

    inverterArray(array, tam);

    return 0;
}