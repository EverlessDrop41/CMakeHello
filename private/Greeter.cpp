#include "Greeter.hpp"
#include <iostream>

Greeter::Greeter(std::string name) {
  this->name = name;
}

void Greeter::say_hello() {
  std::cout << "Hello, " << this->name << "\n";
}
