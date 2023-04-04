//biblioteca 
#include <iostream>

using namespace std;

int main () { 
    int a = 5;
    int b = 10;
    int c = 15;
  //operando a aÇão AND
   if (a < b && b < c){
      cout << "A ordem é: a, b, c, " << endl;
  }
  //operando a ação OR
  if (a > b || b > c){
      cout << "pelomenos uma das condições é verddadeira" << endl;
  }
  
//opreando a ação NOT
if (!( a==b )){
    cout << "é a diferencça de b " << endl;
}
//comclusão
    return 0;
    }