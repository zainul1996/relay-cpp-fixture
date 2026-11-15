#include <cassert>
#include <iostream>

#include "relay_math.h"

int main() {
  assert(relay::add(2, 3) == 5);
  std::cout << "cpp fixture checks passed\n";
  return 0;
}
