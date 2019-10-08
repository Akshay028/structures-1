#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include "list_node.hpp"

namespace structures {
template <typename T>
class list {
 public:
  list() {
    _head = new list_node<T>();
    _tail = new list_node<T>();
    _head->_next = _tail;
    _tail->_previous = _head;
  }
  ~list() {
    list_node<T> *current_node = _head->_next;
    while (current_node != _tail) {
      current_node = current_node->_next;
      delete current_node->_previous;
    }
    delete _head;
    delete _tail;
  }
  bool is_empty() const {
    return _head->_next == _tail && _tail->_previous == _head;
  }
  void prepend(T data) {
    list_node<T> *insert_node = new list_node<T>(data);
    insert_node->_previous = _head;
    insert_node->_next = _head->_next;
    insert_node->_next->_previous = insert_node;
    _head->_next = insert_node;
  }
  void append(T data) {
    list_node<T> *insert_node = new list_node<T>(data);
    insert_node->_previous = _tail->_previous;
    insert_node->_next = _tail;
    insert_node->_previous->_next = insert_node;
    _tail->_previous = insert_node;
  }
  void insert(T data, T after) {
    list_node<T> *insert_node = new list_node<T>(data);
    list_node<T> *after_node = find(after);
    if (after_node == _head) {
      prepend(data);
    } else if (after_node == _tail) {
      append(data);
    } else {
      insert_node->_previous = after_node;
      insert_node->_next = after_node->_next;
      after_node->_next->_previous = insert_node;
      after_node->_next = insert_node;
    }
  }
  list_node<T> *find(T data) {
    list_node<T> *found_node = _head->_next;
    while (found_node != _tail && found_node->_data != data) {
      found_node = found_node->_next;
    }
    return found_node;
  }
  bool remove(T data) {
    list_node<T> *remove_node = find(data);
    if (remove_node == _tail) return false;
    remove_node->_previous->_next = remove_node->_next;
    remove_node->_next->_previous = remove_node->_previous;
    delete remove_node;
    return true;
  }
  void print() {
    list_node<T> *current_node = _head->_next;
    std::cout << "[ ";
    while (current_node != _tail) {
      std::cout << current_node->_data << " ";
      current_node = current_node->_next;
    }
    std::cout << "]" << '\n';
  }

 private:
  structures::list_node<T> *_head, *_tail;
};
}  // namespace structures

#endif /* end of include guard: LIST_HPP */
