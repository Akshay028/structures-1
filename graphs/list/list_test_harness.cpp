#include <iostream>
#include "list.hpp"
int main() {
  structures::list<int> s;
  s.append(5);
  s.append(50);
  s.append(500);
  s.prepend(4);
  s.insert(501, 500);
  s.print();
  s.remove(500);
  s.print();
  s.remove(50);
  s.print();
  if (!s.is_empty()) {
    std::cout << "the list is not empty" << '\n';
  }
  s.remove(5);
  s.print();
  if (s.is_empty()) {
    std::cout << "the list is empty" << '\n';
  }
  s.remove(0);
  if (s.is_empty()) {
    std::cout << "the list is empty" << '\n';
  }
  s.print();
  for (int i = 0; i < 30; i += 2) {
    s.append(i);
  }
  s.insert(50001, 22);
  s.print();
  return 0;
}
