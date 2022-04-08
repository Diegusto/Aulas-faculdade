// C03EX04.CPP

#include <iostream>
using namespace std;

int main(void)
{

   int A, B, R;

   cout << "Entre o valor <A>: "; cin >> A;
   cin.ignore(80, '\n');

   cout << "Entre o valor <B>: "; cin >> B;
   cin.ignore(80, '\n');

   cout << "\n";

   R = A + B;

   if (R >= 10)
      cout << "Resultado = " << R + 5 << endl << endl;
   else
      cout << "Resultado = " << R - 7 << endl << endl;

   cout << "Tecle <Enter> para encerrar... ";
   cin.get();
   return 0;
}
