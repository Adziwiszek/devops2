include(FetchContent)

FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(CalculatorTests
  CalculatorTests.cpp
)

target_link_libraries(CalculatorTests 
  gtest_main
  calculator_lib
)

include(GoogleTest)
gtest_discover_tests(CalculatorTests)
