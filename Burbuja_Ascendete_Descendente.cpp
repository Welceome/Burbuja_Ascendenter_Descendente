#include <iostream>


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void bubbleSort(int arr[], int size, bool ascendente) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            
            if ((ascendente && arr[j] > arr[j + 1]) || (!ascendente && arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


void imprimirArreglo(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int numer = 10;
    int arreglo[numer] = {90, 62, 56, -9, 45, 1, 43, 50, 51, 0};

    std::cout << "Arreglo original: ";
    imprimirArreglo(arreglo, numer);


    bubbleSort(arreglo, numer, true);
    std::cout << "Arreglo Ascendente: ";
    imprimirArreglo(arreglo, numer);

  
    bubbleSort(arreglo, numer, false);
    std::cout << "Arreglo Descendente: ";
    imprimirArreglo(arreglo, numer);

    return 0;
}

