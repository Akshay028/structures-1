#include <iostream>
#include "stack.hpp"
int main() {
  structures::stack<double> s;
  for (int i = 0; i < 100; i++) {
    s.push(i * 1.0);
  }
  while (!s.is_empty()) {
    std::cout << s.top() << '\n';
    s.pop();
  }
  return 0;
}
