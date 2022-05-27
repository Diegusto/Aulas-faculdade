// C07EX33.CPP

#include <iostream>
using namespace std;

#define menor_valor(V1, V2) ((V1 < V2) ? (V1) : (V2))
 
int main(void)
{

  int A, B, RESP;

  cout << "Entre o 1o. valor: "; cin >> A;
  cin.ignore(80, '\n');
  cout << "Entre o 2o. valor: "; cin >> B;
  cin.ignore(80, '\n');

  RESP = menor_valor(A, B);

  cout << "Menor valor: " << RESP << endl;
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

