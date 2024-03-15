#include <iostream>
#include <cstdlib>

using namespace std;

void removeImpar(int array[], int tamanho){
    
    for(int i = 0; i < tamanho; i++){
        if(array[i] % 2 != 0){
            array[i] = rand()%10 * 2;
        }
    }
    
}

int main()
{
    
    int tam = 5;
    int array[tam] = {1, 1, 3, 1, 5};
    
    removeImpar(array, tam);
    
    cout << "Array atualizada sem números impar: " << endl;
    for(int i = 0; i < tam; i++){
        cout << array[i] << " ";
    }

    return 0;
}