// C05EX02.CPP
// Programa Calculadora

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

float R, A, B;

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

void entrada (void)
{
    cout << "\n";
    cout << "Entre um valor para a variavel [A]: "; cin >> A;
    cin.ignore(80, '\n');
    cout << "Entre um valor para a variavel [B]: "; cin >> B;
    cin.ignore(80, '\n');
}

void saida(void)
{
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
}


void rotadicao(void)
{
  cout << "\n";
  cout << "Rotina de Adicao" << endl;
  cout << "----------------" << endl;
  entrada();
  R = A + B;
  saida();
  pausa();
}

void rotsubtracao(void)
{
  cout << "\n";
  cout << "Rotina de Subtracao" << endl;
  cout << "-------------------" << endl;
  entrada();
  R = A - B;
  saida();
  pausa();
}

void rotmultiplicacao(void)
{
  cout << "\n";
  cout << "Rotina de Multiplicacao" << endl;
  cout << "-----------------------" << endl;
 entrada();
  R = A * B;
  saida();
  pausa();
}

void rotdivisao(void)
{
  cout << "\n";
  cout << "Rotina de Divisao" << endl;
  cout << "-----------------" << endl;
  entrada();
  if (B == 0)
    {
      cout << "\n";
      cout << "Erro de divisao" << endl;
    }
  else
    {
      R = A / B;
      saida();
    }
  pausa();
}


int main(void)
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      cout << setprecision(2);
      cout << setiosflags(ios::right);
      cout << setiosflags(ios::fixed);
      cout << "\n\n";
      cout << "--------------------" << endl;
      cout << "Programa Calculadora" << endl;
      cout << "   Menu Principal   " << endl;
      cout << "--------------------" << endl;
      cout << "\n";
      cout << "[1] - Adicao" << endl;
      cout << "[2] - Subtracao" << endl;
      cout << "[3] - Multiplicacao" << endl;
      cout << "[4] - Divisao" << endl;
      cout << "[5] - Fim de Programa" << endl;
      cout << "\n";
      cout << "Escolha uma opcao: "; cin >> OPCAO;
      cin.ignore(80, '\n');
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case 1: rotadicao();        break;
              case 2: rotsubtracao();     break;
              case 3: rotmultiplicacao(); break;
              case 4: rotdivisao();       break;
            }
        }
    }
  return 0;
}
