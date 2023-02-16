add_executable(
  Parking_test
  src/Parking.cc
)

target_link_libraries(
  Parking_test
  GTest::gtest_main
  gmock
  Parking_lib
)

include(GoogleTest)
gtest_discover_tests(Parking_test)