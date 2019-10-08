namespace structures {
template <typename T>
class list;
template <typename T>
class list_node {
 public:
  list_node() {
    _next = nullptr;
    _previous = nullptr;
  }
  list_node(T data) {
    _next = nullptr;
    _previous = nullptr;
    _data = data;
  }
  list_node(T data, list_node *next, list_node *previous) {
    _next = next;
    _previous = previous;
    _data = data;
  }

 private:
  list_node *_next, *_previous;
  T _data;
  friend class list<T>;
};
}  // namespace structures
