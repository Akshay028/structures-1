#ifndef LIST_HPP
#define LIST_HPP

namespace structures {
template <typename T>
class list {
public:

private:
  Node<T> *_head, *_tail;
  int _size;
};
}

#endif /* end of include guard: LIST_HPP */
