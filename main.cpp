#include <iostream>
#include "Greeter.hpp"

int main(int argc, char const *argv[]) {
  Greeter* g = new Greeter("Emily");
  g->say_hello();
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
