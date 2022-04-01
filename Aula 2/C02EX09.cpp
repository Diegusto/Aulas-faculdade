// C02EX09.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  cout << "10 em decimal     = " << dec << 10 << endl;
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;

  cout << setiosflags (ios::uppercase);
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;
  cout << resetiosflags (ios::uppercase);

  cout << setiosflags (ios::showbase);
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;
  cout << resetiosflags (ios::showbase);

  cout << setiosflags(ios::uppercase);
  cout << "\n";
  cout << "10 em octal       = " << oct << 10 << endl;
  cout << "10 em hexadecimal = " << hex << 10 << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;

}
