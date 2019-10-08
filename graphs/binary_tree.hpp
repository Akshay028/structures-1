#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include "node.hpp"

namespace structures {
  template <typename T>
  class binary_tree {
  public:
    binary_tree(){

    }
    ~binary_tree(){

    }
    void insert(T data){}
    Node<T>& find(T data){
      return NULL;
    }
    bool remove(T data){
      if(find(T data) == NULL) return true;
      return false;
    }
  private:
    Node<T> *_root;
    Node<T> *_l, *_r;
  };
} /* structures */

#endif /* end of include guard: BINARY_TREE_HPP */
