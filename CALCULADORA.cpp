// biblooteca
#include <iostream>
using namespace std;

//inicio
int main() {
    //veriaveis 
    char op;
    float num1, num2;
    //info_user
    cout << "ENTRE COM O OPERADOR: +,-,*, /   ";
    cin >> op;
    //info_user
    cout << "ENTRE COM DOIS VAOLRES: ";
    cin >> num1 >>num2;
    
    //comandos
    switch(op) {
        //casso_soma
       case '+':
       cout << num1 << "+" << num2 << " = " << num1 + num2;
       //parada
       break;
       //caso_sub
       case '-':
       cout << num1 << "-" << num2 << " = " << num1 - num2;     
       //caso_mult
       case '*':
       cout << num1 << "*" << num2 << " = " << num1 * num2;
       //parada
       case '/':
       cout << num1 << "/" << num2 << " = " << num1 / num2;
       //parada
       break;
       //falha
       default:
       //feedback_user
       cout << "OPERADOR ERRADO, POR FAVOR INCIRA O OPERADOR COREETO";
       //parada
       break;
       
    }

//finalização 
    return 0;
}