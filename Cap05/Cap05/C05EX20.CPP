// C05EX20.CPP

#include <iostream>

namespace soma
{
  int RESULTADO;
}


namespace quociente
{
  float RESULTADO;
}

namespace produto
{
  long int RESULTADO;
}

namespace diferenca
{
  double RESULTADO;
}

int main(void)
{

  {
    using namespace soma;
    RESULTADO = 5 + 3;
    std::cout << RESULTADO << std::endl;
  }

  {
    using namespace quociente;
    RESULTADO = 5.0 / 3.0;
    std::cout << RESULTADO << std::endl;
  }

  {
    using namespace produto;
    RESULTADO = 5 * 3;
    std::cout << RESULTADO << std::endl;
  }

  {
    using namespace diferenca;
    RESULTADO = 5 - 3;
    std::cout << RESULTADO << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;
}
