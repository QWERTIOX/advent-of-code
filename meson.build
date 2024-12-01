project('advent-of-code', ['cpp'],
  version : '0.1',
  default_options : ['warning_level=3','cpp_std=c++23'])


# Day | tests 
days = {
  '1': ['distance','similarity'],
}
dep_fmt = dependency('fmt',version: '>=11.0')

libs=[]
exes=[]

foreach day,tests : days
  libs+=library(
    f'day-@day@',
    [f'src/day-@day@/core.cpp'],
  )
  exes+=executable(
    f'day-@day@',
    [f'src/day-@day@/run.cpp'],
    link_with: libs[-1],
    dependencies: dep_fmt,
    install : true
  )
  test(f'day-@day@',exes[-1])
  foreach unit_test: tests
    test_executable = executable(
      f'day-@day@-@unit_test@',
      [f'src/day-@day@/tests/@unit_test@.cpp'],
      link_with: libs[-1]
    )
    test(f'day-@day@-@unit_test@',test_executable)
  endforeach
endforeach


