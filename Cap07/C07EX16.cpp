// C07EX16.CPP

#include <iostream>
#include <cctype>
using namespace std;

int displaytext(char STRING[])
{
  for(int I = 0; STRING[I]; I++)
    cout.put(STRING[I]);
  return 0;
}

int main(void)
{
  char LETRA, TEXTO[51];
  int POSICAO;

  cout << "Entre o texto (com ate 50 caracteres): ";
  cin.getline(TEXTO, sizeof(TEXTO));

  char *PMATRIZ = TEXTO;

  cout << "A partir de qual posicao quer ver o texto: ";
  cin >> POSICAO;
  cout << endl;
  displaytext(PMATRIZ + POSICAO - 1);
  cout << endl << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

