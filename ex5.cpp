#include <iostream>

using namespace std;

int numerosDivisiveis(int elemento, int array[], int tamanho){
    
    int contador = 0;
    
    for(int i = 0; i < tamanho; i++){
        if(array[i] % elemento == 0){
            contador = contador + 1;
        }
    }
    
    return contador;
}

int main()
{
    
    int num;
    int tam = 5;
    int array[tam] = {1, 1, 3, 1, 5};
    
    cout << "Array atual: " << endl;
    cout << "{";
    for(int i = 0; i < tam; i++){
        if(i != tam-1){
            cout << array[i] << ", ";
        } else {
            cout << array[i] << "}" << endl;
        }
    }
    
    cout << "Defina um numero para ver por quantos elementos do array ele é divisivel: ";
    cin >> num;

    
    int resultado = numerosDivisiveis(num, array, tam);
    
    cout << "O numero " << num << " é divisivel por " << resultado << " elementos.";

    return 0;
}