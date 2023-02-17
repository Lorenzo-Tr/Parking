#ifndef __PARKING_H__
#define __PARKING_H__

#include <CashMachine.hpp>
#include <EnterParking.hpp>
#include <ExitParking.hpp>
#include <ctime>
#include <vector>

class Parking;

typedef std::shared_ptr<Parking> ParkingPtr;

class Parking {
  int id_;
  static int current_id;
  CashMachine cash_machine_;
  int capacity_;
  float price_;
  std::vector<EnterParkingPtr> enter_parking_;
  std::vector<ExitParkingPtr> exit_parking_;

 public:
  Parking(int capacity, float price)
      : id_(current_id++), capacity_(capacity), price_(price) {}
  ~Parking() = default;

  inline int GetId() const { return id_; }
  inline CashMachine GetCash_machine() const { return cash_machine_; }
  inline int GetCapacity() const { return capacity_; }
  inline float GetPrice() const { return price_; }
  inline std::vector<EnterParkingPtr> GetEnter_parking() const {
    return enter_parking_;
  }
  inline std::vector<ExitParkingPtr> GetExit_parking() const {
    return exit_parking_;
  }

  // void SetId(int id) { id_ = id; }
  inline void SetCash_machine(CashMachine cash_machine) {
    cash_machine_ = cash_machine;
  }
  inline void SetCapacity(int capacity) { capacity_ = capacity; }
  inline void SetPrice(float price) { price_ = price; }

  inline void addEnterParking(EnterParking* enter_parking) {
    enter_parking_.push_back(EnterParkingPtr(enter_parking));
  }
  inline void addExitParking(ExitParking* exit_parking) {
    exit_parking_.push_back(ExitParkingPtr(exit_parking));
  }
  void saveFilling();
};

#endif