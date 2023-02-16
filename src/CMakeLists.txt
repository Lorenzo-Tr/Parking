add_library(
  Parking_lib OBJECT
  Parking.cpp
)

add_executable(${EXE} main.cpp)
target_link_libraries(
  ${EXE}
  Parking_lib
)

