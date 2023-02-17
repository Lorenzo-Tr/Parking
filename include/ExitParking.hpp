#ifndef __EXIT_PARKING_H__
#define __EXIT_PARKING_H__

#include <ParkingLane.hpp>
#include <list>
#include <memory>

class ExitParking;

typedef std::shared_ptr<ExitParking> ExitParkingPtr;

class ExitParking {
  int id_;
  static int current_id;
  std::list<ParkingLanePtr> parking_lane_;

 public:
  ExitParking() : id_(current_id++) {}
  ~ExitParking() = default;

  int GetId() const { return id_; }
  std::list<ParkingLanePtr> GetParking_lane() const { return parking_lane_; }

  void SetId(int id) { id_ = id; }

  inline void addParkingLane(ParkingLane* parking_lane) {
    parking_lane_.push_back(ParkingLanePtr(parking_lane));
  }
  void openParkingLane();
  void closeParkingLane();
};

int ExitParking::current_id;

#endif