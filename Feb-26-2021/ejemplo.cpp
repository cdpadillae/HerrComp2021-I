#include <iostream> //Para que pueda imprimir info a la pantalla
#include <cstdlib>

int main(int argc, char **argv) //Siempre debe existir int main.
{
  int a = std::atoi(argv[1]);
  a = 2*a;

  std::cout << "Hola Mundo, soy yo de nuevo jajaja\n";
  std::cout << "2*a:" << a << std::endl;

  return 0;
}
