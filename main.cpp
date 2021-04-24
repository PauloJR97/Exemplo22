#include <iostream>
using namespace std;

#define A 5

int main() {

 float nota[A];
 float soma = 0, media = 0;
 
 //Leitura
 for(int i = 0; i < A; i++){
   cin>>nota[i];
 }
 //Processamento
 for(int i = 0; i < A; i++){
   soma = soma + nota[i]; 
 }
 media = soma / A;
 cout<< "Media de notas: "<<media<<endl;
 return 0;
}