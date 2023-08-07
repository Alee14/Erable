erable_sources = [
  'main.c',
  'erable-application.c',
  'erable-window.c',
]

erable_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1', version: '>= 1.2'),
]

erable_sources += gnome.compile_resources('erable-resources',
  'erable.gresource.xml',
  c_name: 'erable'
)

executable('erable', erable_sources,
  dependencies: erable_deps,
       install: true,
)
