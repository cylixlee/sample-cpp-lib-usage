#include <iostream>
#include <sample-cmake-lib/ok.h>
#include <sample-cpp-lib/greeting.h>
#include <sample-subproject/version.h>


int main(int argc, const char *argv[]) {
  const auto version = sample_subproject::get_version();
  std::cout << "sample-subproject Version: " << version.major << "."
            << version.minor << "." << version.patch << std::endl;
  std::cout << sample_cpp_lib::greeting() << std::endl;
  std::cout << "import from CMake: "
            << (sample_cmake_lib::ok() ? "ok" : "not ok") << std::endl;
  return 0;
}

// To run this project, execute:
//
// `meson setup <builddir>`
//
// `meson compile -C <builddir>`
//
// and run the executable file compiled in <builddir>.