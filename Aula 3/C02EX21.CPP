// C02EX21.CPP

#include <iostream>
#include <cwchar>
#include <clocale>
using namespace std;

int main(void)
{

  setlocale(LC_ALL, "");

  wchar_t CARACTERE1 = L'\u00AE';
  wchar_t CARACTERE2 = L'\U000000AE';
  wchar_t CARACTERE3 = L'\xAE';
  wchar_t FRASE[19] = L"Marca registrada \u00AE";

  wcout << L"Caractere 1 ..: " << CARACTERE1 << endl;
  wcout << L"Caractere 2 ..: " << CARACTERE2 << endl;
  wcout << L"Caractere 3 ..: " << CARACTERE3 << endl;
  wcout << L"Texto ........: " << FRASE << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
