//biblioteca 
#include <iostream>
using namespace std;
//inicio
int main() {
    //variaveis?
    int num;
    //método?
    do {
    
        cout << "Digite um numero entre 1 e 10";
        cin >> num; 
        
    } while (num < 1 || num > 10); 
    
    cout << "Voce digitou um numero " << num << ".";
    //finalização
    return 0;
}