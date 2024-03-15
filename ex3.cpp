#include <iostream>
#include <unordered_set>

using namespace std;

int contarDestintos(int array[], int tamanho){
    
    unordered_set<int> destintos;
    
    for(int i = 0; i < tamanho; i++){
        destintos.insert(array[i]);
    }
    
    return destintos.size();
}

int main()
{
    
    int tam = 5;
    int array[tam] = {1, 1, 3, 1, 5};
    
    int resultado = contarDestintos(array, tam);

    cout << "A array possui " << resultado << " elementos destintos.";

    return 0;
}