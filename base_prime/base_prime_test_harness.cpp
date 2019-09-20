#include <iostream>
#include "base_prime.hpp"
int main() {
  structures::base_prime p;
  p.set();
  p.print();
  p.multiply(p);
  p.print();
  p.divide(p);
  p.print();
}
