#include <cstdlib>
#include <iostream>

#include <kinetic>

int main(int argc, char **argv) {
  kinetic::Date::print(std::cout, kinetic::DateFormat::DateOnlyDMY);
  
  return EXIT_SUCCESS;
}
