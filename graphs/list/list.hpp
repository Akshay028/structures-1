#ifndef LIST_HPP
#define LIST_HPP
#include "list_node.hpp"

namespace structures {
template <typename T>
class list {
public:
  list(){
    _head = new list_node<T>();
    _tail = new list_node<T>();
    _current = _head;
    _size = 0;
  }
  ~list(){

  }
  bool is_empty() const {
    return _size;
  }
  void insert_after(){
  }
  void insert_before(){

  }
  void insert_at_head(){

  }
  void insert_at_tail(){

  }
  bool remove(){
    return true;
  }
private:
  structures::list_node<T> *_head, *_tail;
  structures::list_node<T> *_current;
  unsigned int _size;
};
} /* structures */

#endif /* end of include guard: LIST_HPP */
