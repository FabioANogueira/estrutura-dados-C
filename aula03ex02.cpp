#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int num_elem;
    cout << "Enter the number of elements: ";
    cin >> num_elem;

    int* c = new int[num_elem]; // ALOCAÇÃO DINÂMICA DE MEMÓRIA
    //int* c = delete int[num_elem]; // LIBERAÇÃO DINÂMICA DE MEMÓRIA (não é necessário aqui, mas é importante lembrar)
        for (int i = 0; i < num_elem; i++){
        /* code */
        c[i] = 2*i;
    }
    for (int i = 0; i < num_elem; i++){
        /* code */
        cout << "c[" << i << "] = " << c[i] << std::endl;
    }
    
        return 0;
}