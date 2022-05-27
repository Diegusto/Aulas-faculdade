// C07EX14.CPP

#include <iostream>
#include <cctype>
using namespace std;

int uplowcase(char *PMATRIZ, int TIPO)
{
  if (TIPO == 1)
    while (*PMATRIZ)
      cout.put(toupper(*PMATRIZ++));
  else
    while (*PMATRIZ)
      cout.put(tolower(*PMATRIZ++));
  return 0;
}

int main(void)
{

  char LETRA;
  char MENSAGEM[50];

  cout << "Entre uma mensagem: ";
  cin.getline(MENSAGEM, sizeof(MENSAGEM));

  cout << endl;

  uplowcase(MENSAGEM, 1); // Apresenta maiusculo
  cout << endl;
  uplowcase(MENSAGEM, 2); // Apresenta minusculo

  cout << endl  << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

