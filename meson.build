project('sample-cpp-lib-usage', 'cpp')

# sample-subproject configuration
sample_subproject = subproject('sample-subproject')
sample_subproject_dep = sample_subproject.get_variable('sample_subproject_dep')

# sample-cpp-lib configuration
#
# This project is managed by Meson, and will be fetched from GitHub.
subproject('sample-cpp-lib')
sample_cpp_lib_dep = dependency('sample-cpp-lib')

# The executable.
executable(
    'sample-cpp-lib-usage',
    ['src/main.cc'],
    dependencies: [
        sample_subproject_dep,
        sample_cpp_lib_dep,
    ],
)