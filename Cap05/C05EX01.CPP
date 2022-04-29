// C05EX01.CPP
// Programa Calculadora

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

float R, A, B;

void rotadicao(void);
void rotsubtracao(void);
void rotmultiplicacao(void);
void rotdivisao(void);
void pausa(void);

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


void rotadicao(void)
{
  cout << "\n";
  cout << "Rotina de Adicao" << endl;
  cout << "----------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cin.ignore(80, '\n');
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  cin.ignore(80, '\n');
  R = A + B;
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
}

void rotsubtracao(void)
{
  cout << "\n";
  cout << "Rotina de Subtracao" << endl;
  cout << "-------------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cin.ignore(80, '\n');
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  cin.ignore(80, '\n');
  R = A - B;
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
}

void rotmultiplicacao(void)
{
  cout << "\n";
  cout << "Rotina de Multiplicacao" << endl;
  cout << "-----------------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cin.ignore(80, '\n');
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  cin.ignore(80, '\n');
  R = A * B;
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
}

void rotdivisao(void)
{
  cout << "\n";
  cout << "Rotina de Divisao" << endl;
  cout << "-----------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cin.ignore(80, '\n');
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  cin.ignore(80, '\n');
  if (B == 0)
    {
      cout << "\n";
      cout << "Erro de divisao" << endl;
    }
  else
    {
      R = A / B;
      cout << "\n";
      cout << "O resultado entre A e B = " << setw(8);
      cout << R << endl;
    }
  pausa();
}

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}
