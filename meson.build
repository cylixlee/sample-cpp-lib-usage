project('sample-cpp-lib-usage', 'cpp')

cmake = import('cmake')

# sample-subproject configuration
sample_subproject = subproject('sample-subproject')
sample_subproject_dep = sample_subproject.get_variable('sample_subproject_dep')

# sample-cpp-lib configuration
#
# This project is managed by Meson, and will be fetched from GitHub.
subproject('sample-cpp-lib')
sample_cpp_lib_dep = dependency('sample-cpp-lib')

# sample-cmake-lib configuration
#
# This project is managed by CMake, and Meson offers compatibility with it.
sample_cmake_lib = cmake.subproject('sample-cmake-lib')
sample_cmake_lib_dep = sample_cmake_lib.dependency('sample-cmake-lib')

# The executable.
executable(
    'sample-cpp-lib-usage',
    ['src/main.cc'],
    dependencies: [
        sample_subproject_dep,
        sample_cpp_lib_dep,
        sample_cmake_lib_dep,
    ],
)