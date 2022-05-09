// C05EX11.CPP
// Definicao de cores

#include <iostream>
#include <windows.h>
using namespace std;

#define black     0 // Preto
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Ciano
#define red       4 // Vermelho
#define magenta   5 // Magenta
#define brown     6 // Marrom
#define lgray     7 // Cinza claro
#define dgray     8 // Cinza escuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Ciano claro
#define lred     12 // Vermelho claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarelo
#define white    15 // Branco

void clear(void)
{
  HANDLE TELA;
  DWORD ESCRITA = 0;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = 0;
  POS.Y = 0;
  FillConsoleOutputCharacter(TELA, 32, 80 * 25, POS,
    &ESCRITA);
  SetConsoleCursorPosition(TELA, POS);
  return;
}

void color(int COR_FUNDO, int COR_TEXTO)
{
  HANDLE TELA;
  int COR;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);

  if (COR_FUNDO<0 and COR_FUNDO>15 and COR_TEXTO<0 and
    COR_TEXTO > 15)
    COR = 15;
  else
    COR = COR_TEXTO + COR_FUNDO * 16;
  SetConsoleTextAttribute(TELA, COR);
  return;
}

int main(void)
{
  clear();
  cout << "Padrao de Cores com Codigo Numerico\n\n";
  cout << endl;

  color(1,14);
  cout << "Fundo: Azul // Texto: Amarelo" << endl;
  cout << endl;

  color(1,7);
  cout << "Fundo: Azul // Texto: Cinza claro" << endl;
  cout << endl;

  color(4,14);
  cout << "Fundo: Vermelho // Texto: Amarelo" << endl;
  cout << endl;

  color(0,2);
  cout << "Fundo: Preto // Texto: Verde" << endl;
  cout << endl;

  color(7,12);
  cout << "Fundo: Cinza claro // Texto: Vermelho claro";
  cout << endl << endl;

  color(brown,white);
  cout << "Fundo: Marrom // Texto: Branco" << endl;
  cout << endl;

  color(0,7);

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
