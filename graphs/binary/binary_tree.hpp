#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

namespace structures {
  template <typename T>
  class binary_tree {
  private:
    class binary_tree_node {
    public:
      binary_tree_node(){
        _l = NULL;
        _r = NULL;
        _data = (T)NULL;
      }
      binary_tree_node(T data){
        _l = NULL;
        _r = NULL;
        _data = data;
      }
      binary_tree_node(binary_tree_node *l, binary_tree_node *r){
        _l = l;
        _r = r;
        _data = (T)NULL;
      }
      binary_tree_node(binary_tree_node *l, binary_tree_node *r, T data){
        _l = l;
        _r = r;
        _data = data;
      }
    private:
      T _data;
      binary_tree_node *_l, *_r;
    };
  public:
    binary_tree(){
      _root = new binary_tree_node();
    }
    ~binary_tree(){

    }
    void insert(T data = (T)NULL){
      data++;
    }
    binary_tree_node& find(T data = (T)NULL){
      data++;
      return (T)NULL;
    }
    bool remove(T data){
      if(find(data) == (T)NULL) return true;
      return false;
    }
  private:
    binary_tree_node *_root;
  };
} /* structures */

#endif /* end of include guard: BINARY_TREE_HPP */
