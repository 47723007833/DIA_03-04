//biblioteca 
#include <iostream>
using namespace std;
//inicio
int main() {
    int num;
    //feedback_user
        cout << " Digite um numero inteiro positivo: ";
        //inserção_valor
        cin >> num; 
//feedback_user
    cout << " Os primeiros " << num << "os numeros pares sao: ";
    //¯\_(ツ)_/¯ sinceramente não sei 
    for (int i = 2; i <= num * 2; i += 2) {
        //inserção_valor
        cout << i << " ";
    }
    //final
    return 0;
}