# lib
add_library(calculator_lib
  Calculator/Calculator.cpp
)

target_include_directories(calculator_lib
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

# app
add_executable(calculator_app
  main.cpp
)

target_link_libraries(calculator_app calculator_lib)
