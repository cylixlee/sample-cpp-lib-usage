project('sample-subproject', 'cpp', default_options: {'default_library': 'static'})

include_dir = include_directories('include')

sample_subproject_lib = library(
    'sample-subproject',
    ['src/version.cc'],
    include_directories: include_dir,
)

sample_subproject_dep = declare_dependency(
    link_with: [sample_subproject_lib],
    include_directories: include_dir,
)