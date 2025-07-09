#include <iostream>
#include <sample-subproject/version.h>

int main(int argc, const char *argv[]) {
  const auto version = sample_subproject::get_version();
  std::cout << "sample-subproject Version: " << version.major << "."
            << version.minor << "." << version.patch << std::endl;
  return 0;
}