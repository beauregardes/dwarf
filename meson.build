project('dwarf', ['c', 'cpp'],
  version : '0.0.1',
  license : 'MIT',
  default_options : ['warning_level=3', 'default_library=static'])

sdl2_dep = dependency('sdl2')
glm_dep = dependency('glm')
imgui_dep = dependency('imgui')

fmt_dep = dependency('fmt')
spdlog_dep = dependency('spdlog')

freetype2_dep = dependency('freetype2')
harfbuzz_dep = dependency('harfbuzz')

dwarf_inc = include_directories('include', 'thirdparty/glad/include')

dwarf = library('dwarf',
  'thirdparty/glad/src/gl.c',
  'src/dwarf/dwarf.cpp',
  include_directories : [dwarf_inc],
  dependencies : [sdl2_dep, glm_dep, imgui_dep, fmt_dep, spdlog_dep, freetype2_dep, harfbuzz_dep])

dwarf_dep = declare_dependency(
  include_directories : [dwarf_inc],
  link_with : [dwarf],
  dependencies : [fmt_dep])

subdir('example')
