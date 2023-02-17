add_library(
  Parking_lib OBJECT
  CashMachine.cpp
  Client.cpp
  EnterParking.cpp
  ExitParking.cpp
  Parking.cpp
  ParkingLane.cpp
  Pound.cpp
  Terminal.cpp
  Ticket.cpp
  Vehicule.cpp
  Visitor.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_executable(${EXE} main.cpp)
install(TARGETS ${EXE} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/bin)
target_link_libraries(
  ${EXE}
  Parking_lib
)