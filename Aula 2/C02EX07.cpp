// C02EX07.CPP

#include <iostream>
using namespace std;

int main(void)
{
  float HT, VH, PD, TD, SB, SL;

  cout << "Entre a quantidade de horas trabalhadas ...: ";
  cin >> HT;
  cin.ignore (80, '\n');

  cout << "Entre o valor da hora de trabalho .........: ";
  cin >> VH;
  cin.ignore(80, '\n');

  cout << "Entre o valor do percentual de desconto ...: ";
  cin >> PD;
  cin.ignore(80, '\n');

  SB = HT * VH;
  TD = (PD / 100) * SB;
  SL = SB - TD;

  cout << "\n";
  cout << "Salario Bruto ....: " << SB << endl;
  cout << "Desconto .........: " << TD << endl;
  cout << "Salario Liquido ..: " << SL << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
