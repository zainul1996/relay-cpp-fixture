#include "relay_math.h"

namespace relay {

long long add(long long left, long long right) { return left + right; }

long long gcd(long long left, long long right) {
  if (left < 0) left = -left;
  if (right < 0) right = -right;
  while (right != 0) {
    long long t = right;
    right = left % right;
    left = t;
  }
  return left;
}

}  // namespace relay
