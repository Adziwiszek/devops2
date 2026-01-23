#include <iostream>
#include "Calculator/Calculator.hpp"

int main() {
  std::cout 
    << "  ^----^  \n"
    << "<  -  -  >\n"
    << "<   <>   >\n"
    << " |      |  /\\ \n"
    << " |      |  || \n"
    << " |      |  || \n"
    << " |      |  || \n"
    << " |      |  || \n"
    << " |      |  || \n"
    << " \\______/ _|/ \n";

  Calculator calc;
  std::cout << calc.add(6, 7) << std::endl;
  std::cout << calc.sub(45, 3) << std::endl;

  return 0;
}
