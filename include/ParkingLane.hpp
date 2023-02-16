#ifndef __PARKING_LANE_H__
#define __PARKING_LANE_H__

class ParkingLane {
  int id_;

  bool status_;

 public:
  ParkingLane();
  ~ParkingLane();

  int GetId() const { return id_; }
  bool GetStatus() const { return status_; }

  void SetId(int id) { id_ = id; }
  void SetStatus(bool status) { status_ = status; }

  void open();
  void close();
  void weightVerification(int);
};

#endif