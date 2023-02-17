#ifndef __PARKING_LANE_H__
#define __PARKING_LANE_H__

class ParkingLane;

typedef std::shared_ptr<ParkingLane> ParkingLanePtr;

class ParkingLane {
  int id_;
  static int current_id;
  bool status_;

 public:
  ParkingLane() : id_(current_id++) {}
  ~ParkingLane() = default;

  inline int GetId() const { return id_; }
  inline bool GetStatus() const { return status_; }

  // void SetId(int id) { id_ = id; }
  inline void SetStatus(bool status) { status_ = status; }

  void open();
  void close();
  void weightVerification(int);
};

int ParkingLane::current_id;

#endif