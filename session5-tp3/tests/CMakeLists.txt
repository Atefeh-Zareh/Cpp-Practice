add_executable (test_templates
  test_main.cpp
  test_q1.cpp
#  test_q2.cpp
#  test_q3.cpp
#  test_q5.cpp
#  test_q6.cpp
  )
target_include_directories(test_templates PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_test (NAME test_templates COMMAND test_templates)
