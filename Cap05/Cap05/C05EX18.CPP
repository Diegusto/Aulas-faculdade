// C05EX18.CPP

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
  soma::RESULTADO = 5 + 3;
  std::cout << soma::RESULTADO << std::endl;

  quociente::RESULTADO =5.0 / 3.0;
  std::cout << quociente::RESULTADO << std::endl;

  produto::RESULTADO = 5 * 3;
  std::cout << produto::RESULTADO << std::endl;

  diferenca::RESULTADO = 5 - 3;
  std::cout << diferenca::RESULTADO << std::endl;

  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar... ";
  std::cin.get();
  return 0;
}
