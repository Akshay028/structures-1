#ifndef BASE_PRIME_HPP
#define BASE_PRIME_HPP
#include <stdlib.h>
#include <cmath>
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
    _n[1] = 0;
    _n[2] = 1;
    _n[5] = 1;
  }
  base_prime& operator*(const base_prime& _m) {
    for (int i = 0; i < _max; i++) {
      _n[i] += _m._n[i];
    }
    return *this;
  }
  base_prime& operator/(const base_prime& _m) {
    for (int i = 0; i < _max; i++) {
      _n[i] -= _m._n[i];
    }
    return *this;
  }
  void print() {
    double value = 1;
    for (int i = 0; i < _max; i++) {
      double base_i = pow(prime_base[i], _n[i]);
      if(base_i>1){
        value*=base_i;
      }
      //if(base_i != 1) value+=base_i;
      //std::cout << prime_base[i] << "^" << _n[i] << " ";
      //std::cout << " " << _n[i] << " ";
    }
    std::cout << "Value of n: " << value << '\n';
  }

 private:
  int _max;
  int* _n;
};
}  // namespace structures
#endif /* end of include guard STACK_HPP */
