// C07EX32.CPP

#include <iostream>
#include <cctype>
using namespace std;

typedef int  inteiro;
typedef char caractere;

#define inicio         {
#define fim            }
#define escreva        cout <<
#define leia           cin >>
#define programa       int main(void) {
#define fim_programa   return 0; }
#define nova_linha     cout << endl
#define repita         do {
#define enquanto       } while
#define le_tecla       cin.get()
#define maiusculo      toupper

programa
  inteiro I;
  caractere LETRA;
  escreva "Entre um valor inteiro: ";
  leia I;
  cin.ignore(80, '\n');
  escreva "Valor informado = ";
  escreva I;
  nova_linha;
  nova_linha;
  escreva "Tecle <Enter> para encerrar... ";
  le_tecla;
fim_programa

