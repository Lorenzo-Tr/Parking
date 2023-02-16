#ifndef __EXIT_PARKING_H__
#define __EXIT_PARKING_H__

#include <ParkingLane.hpp>
#include <list>
#include <memory>

class ExitParking {
  static int current_id;
  int id_;
  std::list<ParkingLanePtr> parking_lane_;

 public:
  ExitParking() : id_(current_id++) {}
  ~ExitParking();

  int GetId() const { return id_; }
  std::list<ParkingLanePtr> GetParking_lane() const { return parking_lane_; }

  void SetId(int id) { id_ = id; }

  inline void addParkingLane(ParkingLane* parking_lane) {
    parking_lane_.push_back(std::make_shared<ParkingLane>(parking_lane));
  }
  void openParkingLane();
  void closeParkingLane();
};

typedef std::shared_ptr<ExitParking> ExitParkingPtr;

#endif