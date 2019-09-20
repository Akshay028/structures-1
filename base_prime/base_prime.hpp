#ifndef BASE_PRIME_HPP
#define BASE_PRIME_HPP
#include <stdlib.h>
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31.
#define __DEFAULT_CAPACITY 11
const int prime_base[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
namespace structures {
class base_prime {
 public:
  base_prime() : _max(__DEFAULT_CAPACITY) { _n = new int[_max]; }
  ~base_prime() { delete[] _n; }
  void set() {
    _n[0] = 1;
    _n[1] = 2;
    _n[2] = 3;
    _n[7] = 1;
  }
  void multiply(base_prime& _m) {
    for (int i = 0; i < _max; i++) {
      _n[i] += _m._n[i];
    }
  }
  void divide(base_prime& _m) {
    for (int i = 0; i < _max; i++) {
      _n[i] -= _m._n[i];
    }
  }
  void print() {
    double value = 0;
    for (int i = 0; i < _max; i++) {
      value += prime_base[i] * _n[i];
    }
    std::cout << "Value of n: " << value << '\n';
  }

 private:
  int _max;
  int* _n;
};
}  // namespace structures
#endif /* end of include guard STACK_HPP */
