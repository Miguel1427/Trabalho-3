#include <iostream>
using namespace std;

// INSERTION
void insertionSort(int vetor[], int MAX_TAMANHO) {
    for(int i = 1; i < MAX_TAMANHO; ++i) {
        int key = vetor[i];
        int j = i - 1;

    // Encontra a posição correta para inserir o elemento atual
    while(j >= 0 && vetor[j] > key) {
        vetor[j + 1] = vetor[j];
        j = j - 1;
    }
        vetor[j + 1] = key;    
  }
}

//BUBBLE
void bubbleSort(int vetor[], int MAX_TAMANHO) {
    for (int i = 0; i < MAX_TAMANHO - 1; ++i) {
        for (int j = 0; j < MAX_TAMANHO - i - 1; ++j) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

//SELECTION
void selectionSort(int vetor[], int MAX_TAMANHO){
    for (int i = 0;  i < MAX_TAMANHO - 1; ++i){
        int minIndex = 1;

        for(int j = i + 1; j < MAX_TAMANHO; ++j){
            if ( vetor[j] < vetor[minIndex]){
                minIndex = j;
            }
        }
        int temp = vetor[i];
        vetor[i] = vetor[minIndex];
        vetor[minIndex] = temp;
    }
}

int main(){

    const int MAX_TAMANHO = 50;
    int vetor[MAX_TAMANHO];      
    int tamanho;
    cout << "Digite a quantidade de valores que contém na sua lista: ";
    cin >> tamanho;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Digite o valor da posição " << i << " da lista: ";
        cin >> vetor[i];
    }




    // INSERTION
    if(tamanho > 0 && tamanho <= 20){

    cout << "Array original: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    insertionSort(vetor, tamanho);

    cout << "Array ordenado usando Isenrtion Sort: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    }


    // BUBBLE
    else if(tamanho > 20 && tamanho <= 30) {

        cout <<" Array original: ";
        for ( int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout <<endl;

       bubbleSort(vetor, tamanho);

        cout <<"Array ordenado usando Bubble Sort: ";
        for (int i = 0; i < tamanho; ++i){
            cout << vetor[i] << " ";
        }
        cout << endl;
    }


     // SELECTION
     else if(tamanho > 30){
        cout <<" Array original: ";
        for ( int i = 0; i < tamanho; ++i) {
            cout << vetor[i] << " ";
        }
        cout <<endl;

       selectionSort(vetor, tamanho);

        cout <<"Array ordenado usando Selection Sort: ";
        for (int i = 0; i < tamanho; ++i){
            cout << vetor[i] << " ";
        }
        cout << endl;
     }



    // NENHUMA OPÇÃO
     else{
        cout << "Valor incorreto" << endl;
     }
    


    return 0;
}
