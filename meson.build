project('sample-cpp-lib-usage', 'cpp')

# sample-subproject configuration
sample_subproject = subproject('sample-subproject')
sample_subproject_dep = sample_subproject.get_variable('sample_subproject_dep')

# The executable.
executable(
    'sample-cpp-lib-usage',
    ['src/main.cc'],
    dependencies: [
        sample_subproject_dep,
    ],
)