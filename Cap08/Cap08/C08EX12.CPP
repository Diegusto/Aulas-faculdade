// C08EX12.CPP

#include <iostream>
using namespace std;

class TAREA
{

  public:

    // Area: quadrado

    long AREA(int X)
    {
      long AREA = X * X;
      return AREA;
    }

    // Area: cilindro

    double AREA(float R, float H)
    {
      double AREA = R * R * 3.14159 * H;
      return AREA;
    }

    // Area: Cubo

    long AREA(int X, int Y, int Z)
    {
      long AREA = X * Y * Z;
      return AREA;
    }

};

int main(void)
{
  TAREA CALC;
  cout << "Area: Quadrado ..: " << CALC.AREA(5) << "\n";
  cout << "Area: Cubo ......: " << CALC.AREA(5, 6, 7);
  cout << endl;
  cout << "Area: Cilindro ..: " << CALC.AREA(7, 3) << "\n";
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
