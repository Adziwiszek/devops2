#include <iostream>
#include "Calculator/Calculator.hpp"

#if defined(__x86_64__) || defined(_M_X64)
    #define ARCH_X86_64 1
#elif defined(__aarch64__) || defined(_M_ARM64)
    #define ARCH_ARM_64 1
#endif

int add_one(int x) {
#if defined(ARCH_ARM_64)
    std::cout << "ARM64\n";
    asm volatile (
        "add %w0, %w0, #1"
        : "+r"(x)
    );
#elif defined(ARCH_X86_64)
    std::cout << "x86_64\n";
    asm volatile (
        "addl $1, %0"
        : "+r"(x)
    );
#endif
    return x;
}


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
  std::cout << add_one(41) << std::endl;

  return 0;
}
