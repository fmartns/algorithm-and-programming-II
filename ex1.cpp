#include <iostream>

using namespace std;

bool verificaElemento(int elemento, int array[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(array[i] == elemento){
            return true;
        }
    }

    return false;
}

int main()
{

    int tam = 5;
    int elemento = 15;
    int array[tam] = {1, 2, 3, 4, 5};

    bool resultado = verificaElemento(elemento, array, tam);

    if(elemento == true){
        cout << "O elemento " << elemento << " existe na array.";
    } else {
        cout << "O elemento " << elemento << " não existe na array.";
    }

    return 0;
}