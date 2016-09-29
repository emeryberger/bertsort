/* "I am Alpha and Omega, the begin() and the end(). I am the Bertsort." */

#include <algorithm>

template <class Container, class Comparator = std::less<typename Container::value_type> >
void bertsort (Container& c) {
  Comparator comp;
  std::sort(std::begin(c), std::end(c), comp);
}

