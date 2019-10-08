#define NULL nullptr
namespace structures {
template <typename T>
class list_node {
public:
  list_node(){
    _next = NULL;
    _previous = NULL;
    _quantity = 0;
  }
  list_node(T data){
    _next = NULL;
    _previous = NULL;
    _data = data;
    _quantity = 1;
  }
  list_node(T data, list_node *next, list_node *previous){
    _next = next;
    _previous = previous;
    _data = data;
    _quantity = 1;
  }
  void increment(){
    _quantity++;
  }
  void decrement(){
    _quantity--;
  }
private:
  list_node *_next, *_previous;
  T _data;
  unsigned int _quantity;
};
} /* structures */
