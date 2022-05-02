// BIBLIO_ECRA.CPP
// Arquivo com codigo das funcoes da biblioteca ECRA.h

#include <iostream>
#include <windows.h>

// Limpar tela

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

// Posicionar cursor

void position(int LINHA, int COLUNA)
{
  HANDLE TELA;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = COLUNA - 1;
  POS.Y = LINHA - 1;
  SetConsoleCursorPosition(TELA, POS);
  return;
}

// Limpar linha

void clearline(void)
{
  HANDLE TELA;
  COORD POS;
  CONSOLE_SCREEN_BUFFER_INFO VIDEO;
  DWORD ESCRITA = 0;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(TELA, &VIDEO);
  POS.Y = VIDEO.dwCursorPosition.Y;
  POS.X = VIDEO.dwCursorPosition.X;
  FillConsoleOutputCharacter(TELA, 32, 80 - POS.X , POS,
    &ESCRITA);
  return;
}

// Cor de texto e fundo

void color(int COR_FUNDO, int COR_TEXTO)
{
  HANDLE TELA;
  int COR;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);

  if (COR_FUNDO<0 and COR_FUNDO>15 and COR_TEXTO<0 and
    COR_TEXTO>15)
    COR = 15;
  else
    COR = COR_TEXTO + COR_FUNDO * 16;      
  SetConsoleTextAttribute(TELA, COR);
  return;
}
