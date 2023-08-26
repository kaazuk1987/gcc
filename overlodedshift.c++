#include <iostream>

std::ostream &operator<<(std::ostream &os, const char *) {
  return std::operator<<(os, "I love dogs\n");
}

int main() {
  std::cout << "I love cats\n";
  return 0;
}