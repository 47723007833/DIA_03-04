//biblioteca
#include <iostream>
#include <stdlib.h>
using namespace std;
//inicio
int main () { 
    //variaveis?
    double nota1, nota2, nota3, nota4;
    //feedback
    cout << "Digite a sua primeira nota do semestre >>>";
    //add valor
    cin >> nota1;
    // feedback
    cout << "Digite a sua segunda nota do semestre >>>";
    //add valor
    cin >> nota2;
    // feedback
    cout << "Digite a sua terceira nota do semestre >>>";
    //add valor
    cin >> nota3;
    // feedback
    cout << "Digite a sua primeira nota do semestre >>>";
    //add valor
    cin >> nota4;
    //operção
    double soma = ( nota1, nota2, nota3, nota4 );
    //
    soma = (soma / 4);
    //feedback_user
   cout << "a sua medida do semetres foi : " << soma << endl << endl;
   //i-se
   if(soma >= 7){
       //feedback_user
       cout << "Parabens você foi aprovado !" << endl;
   }else{
       //feedback_user
       cout << "Eita você foi reprovado !" << endl;
    //comclusão 
   }
    return 0;
    }