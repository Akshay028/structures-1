#ifndef STACK_HPP
#define STACK_HPP

#include <cstring>
#include <stdexcept>

#define __DEFAULT_CAPACITY 20
#define __INITIAL_SIZE 0

double const e = 2.7182818284590452353602874713527;

namespace structures {
template <typename T>
class stack {
 public:
  stack(){
    _capacity = __DEFAULT_CAPACITY;
    _size = __INITIAL_SIZE;
    _stack = new T[_capacity];
  }
  stack(int __init_capacity) {
    _size = __INITIAL_SIZE;
    _capacity = __init_capacity;
    _stack = new T[_capacity];
  }
  stack& operator=(const stack& source) {
    if (this == &source)
      return *this;
    else {
      this->empty();
      this->resize(source._capacity);
      this->_size = source._size;
      std::memcpy(this->_stack, source._stack, _size * sizeof(source._stack));
    }
    return *this;
  }
  ~stack() { delete[] _stack; }
  int size() const { return _size; }
  int capacity() const { return _capacity; }
  void pop() {
    if (is_empty())
      throw std::range_error("Attempted to pop an empty stack.\n");
    _size--;
  }
  void push(T element) {
    if (_size == _capacity) grow();
    _stack[_size++] = element;
  }
  T top() const {
    return (!is_empty())
               ? _stack[_size - 1]
               : throw std::range_error("Attempted to top an empty stack.\n");
  }
  bool is_empty() const { return _size <= __INITIAL_SIZE; }
  void empty() { _size = 0; }
  void grow() {
    int _capacity_old = _capacity;
    _capacity *= e;
    T* _stack2 = new T[_capacity];
    std::memcpy(_stack2, _stack, _capacity_old * sizeof(*_stack));
    delete[] _stack;
    _stack = _stack2;
  }
  void resize(int __capacity_new) {
    delete[] _stack;
    _capacity = __capacity_new;
    _stack = new T[_capacity];
  }

 private:
  T* _stack;
  int _capacity, _size;
};
}  // namespace structures
#endif /* end of include guard STACK_HPP */
