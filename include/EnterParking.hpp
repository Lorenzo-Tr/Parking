#ifndef __ENTER_PARKING_H__
#define __ENTER_PARKING_H__

#include <ParkingLane.hpp>
#include <list>
#include <memory>

class EnterParking;

typedef std::shared_ptr<EnterParking> EnterParkingPtr;

class EnterParking {
  int id_;
  static int current_id;
  std::list<ParkingLanePtr> parking_lane_;

 public:
  EnterParking() : id_(current_id++) {}
  ~EnterParking() = default;

  int GetId() const { return id_; }
  std::list<ParkingLanePtr> GetParking_lane() const { return parking_lane_; }

  void SetId(int id) { id_ = id; }

  inline EnterParkingPtr addParkingLane(ParkingLane* parking_lane) {
    parking_lane_.push_back(ParkingLanePtr(parking_lane));
    return EnterParkingPtr(this);
  }
  void openParkingLane();
  void closeParkingLane();
};

int EnterParking::current_id;

#endif