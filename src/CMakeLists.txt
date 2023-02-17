add_library(
  Parking_lib OBJECT
  Parking.cpp
  Visitor.cpp
  Client.cpp
  Ticket.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_executable(${EXE} main.cpp)
install(TARGETS ${EXE} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/bin)
target_link_libraries(
  ${EXE}
  Parking_lib
)