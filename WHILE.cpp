//biblioteca 
#include <iostream>
using namespace std;
//inicio
int main() {
    int num, i = 1;
    // HUD_user
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    //condição
    while (i <= num ){
        cout << i << " ";
        i++ ;
    }
//finalização
    return 0;
}