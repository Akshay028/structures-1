#include <iostream>
#include "list.hpp"
int main() {
  structures::list<int> s;
  s.append(5);
  s.append(50);
  s.append(500);
  s.print();
  s.remove(500);
  s.print();
  s.remove(50);
  s.print();
  s.remove(5);
  s.print();
  s.remove(0);
  s.print();
  for(int i = 0; i< 3000; i+=2){
    s.append(i);
  }
  s.print();
  return 0;
}
