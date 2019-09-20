#include <iostream>
#include "stack.hpp"
int main() {
  structures::stack<double> s;
  structures::stack<double> s2(200);
  std::cout << s2.capacity() << '\n';
  for (int i = 0; i < 100; i++) {
    s.push(i * 1.0);
    s2.push(i * 1.0);
  }
  while (!s.is_empty()) {
    std::cout << s.top() << '\t';
    s.pop();
  }
  std::cout << "end of stack" << '\n';
  for (int i = 0; i < 32; i++) {
    s.push(i * 1.0);
  }
  s.empty();
  s.push(30);
  s.top();
  s.pop();
  if (s.is_empty()) {
    std::cout << "s is empty" << '\n';
  }
  s = s2;
  std::cout << "Checking = operator" << '\n';
  while (!s.is_empty()) {
    std::cout << s.top() << '\t';
    s.pop();
  }
  if (s.is_empty()) {
    std::cout << "s is empty" << '\n';
  } else {
    std::cout << "s is not empty" << '\n';
  }
  if (s2.is_empty()) {
    std::cout << "s2 is empty" << '\n';
  } else {
    std::cout << "s2 is not empty" << '\n';
  }
  return 0;
}
