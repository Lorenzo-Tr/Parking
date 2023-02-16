#ifndef __ENTER_PARKING_H__
#define __ENTER_PARKING_H__

#include <ParkingLane.hpp>

class EnterParking {
  int id_;
  ParkingLane parking_lane_;

 public:
  int GetId() const { return id_; }
  ParkingLane GetParking_lane() const { return parking_lane_; }

  void SetId(int id) { id_ = id; }
  void SetParking_lane(ParkingLane parking_lane) {
    parking_lane_ = parking_lane;
  }

  void addParkingLane();
  void openParkingLane();
  void closeParkingLane();
};

#endif