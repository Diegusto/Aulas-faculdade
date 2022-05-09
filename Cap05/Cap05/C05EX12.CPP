// C05EX12.CPP
// Programa Calculadora

#include <iostream>
#include <iomanip>
#include <cctype>
#include "ecra.h"
using namespace std;

float R, A, B;

void rotadicao(void);
void rotsubtracao(void);
void rotmultiplicacao(void);
void rotdivisao(void);
void entrada(void);
void saida(void);
void pausa(void);

int main(void)
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      cout << setprecision(2);
      cout << setiosflags(ios::right);
      cout << setiosflags(ios::fixed);
      clear();
      position( 1, 1); cout << "--------------------";
      position( 2, 1); cout << "Programa Calculadora";
      position( 3, 1); cout << "   Menu Principal   ";
      position( 4, 1); cout << "--------------------";
      position( 6, 1); cout << "[1] - Adicao";
      position( 7, 1); cout << "[2] - Subtracao";
      position( 8, 1); cout << "[3] - Multiplicacao";
      position( 9, 1); cout << "[4] - Divisao";
      position(10, 1); cout << "[5] - Fim de Programa";
      position(12, 1); cout << "Escolha uma opcao: ";
      cin >> OPCAO;
      cin.ignore(80, '\n');
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case  1: rotadicao();        break;
              case  2: rotsubtracao();     break;
              case  3: rotmultiplicacao(); break;
              case  4: rotdivisao();       break;
            }
        }
    }
  return 0;
}

void entrada(void)
{
  position( 5, 1);
  cout << "Entre um valor para a variavel [A]: ";
  cin >> A;
  cin.ignore(80, '\n');
  position( 6, 1);
  cout << "Entre um valor para a variavel [B]: ";
  cin >> B;
  cin.ignore(80, '\n');
  return;
}

void saida(void)
{
  position( 9, 1); cout << "O resultado entre A e B = ";
  cout << setw(8);
  cout << R << endl;
  position(11, 1); pausa();
  return;
}

void rotadicao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Adicao";
  position( 2, 1); cout << "----------------";
  entrada();
  R = A + B;
  saida();
  return;
}

void rotsubtracao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Subtracao";
  position( 2, 1); cout << "-------------------";
  entrada();
  R = A - B;
  saida();
  return;
}

void rotmultiplicacao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Multiplicacao";
  position( 2, 1); cout << "-----------------------";
  entrada();
  R = A * B;
  saida();
  return;
}

void rotdivisao(void)
{
  clear();
  position( 1, 1); cout << "Rotina de Divisao";
  position( 2, 1); cout << "-----------------";
  entrada();
  if (B == 0)
    {
      position( 9, 1); cout << "Erro de divisao";
      position(11, 1); pausa();
    }
  else
    {
      R = A / B;
      saida();
    }
  return;
}

void pausa(void)
{
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return;
}
