#ifndef __PARKING_LANE_H__
#define __PARKING_LANE_H__

class ParkingLane {
  int id_;
  int id_;

  bool status_;

 public:
  ParkingLane();
  ~ParkingLane();

  inline int GetId() const { return id_; }
  inline bool GetStatus() const { return status_; }

  // void SetId(int id) { id_ = id; }
  inline void SetStatus(bool status) { status_ = status; }

  void open();
  void close();
  void weightVerification(int);
};

typedef std::shared_ptr<ParkingLane> ParkingLanePtr;

#endif