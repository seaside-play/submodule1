#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "Hello World!" << "\n";
  for (auto i = 0; i < 10; ++i)
     std::cout << "line: " << i << "\n";
  return 0;
}