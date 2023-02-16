#ifndef __PARKING_H__
#define __PARKING_H__

#include <CashMachine.hpp>
#include <EnterParking.hpp>
#include <ExitParking.hpp>
#include <ctime>
#include <vector>

class Parking {
  static int current_id;
  int id_;
  CashMachine cash_machine_;
  int capacity_;
  int price_;
  std::time_t opening_hours_;
  std::vector<EnterParkingPtr> enter_parking_;
  std::vector<ExitParkingPtr> exit_parking_;

 public:
  Parking(int capacity, int price, std::time_t opening_hours)
      : id_(current_id++),
        capacity_(capacity),
        price_(price),
        opening_hours_(opening_hours) {}
  ~Parking() = default;

  inline int GetId() const { return id_; }
  inline CashMachine GetCash_machine() const { return cash_machine_; }
  inline int GetCapacity() const { return capacity_; }
  inline int GetPrice() const { return price_; }
  inline std::time_t GetOpening_hours() const { return opening_hours_; }
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
  inline void SetPrice(int price) { price_ = price; }
  inline void SetOpening_hours(std::time_t opening_hours) {
    opening_hours_ = opening_hours;
  }

  inline void addEnterParking(EnterParking* enter_parking) {
    enter_parking_.push_back(std::make_shared<EnterParking>(enter_parking));
  }
  inline void addExitParking(ExitParking* exit_parking) {
    exit_parking_.push_back(std::make_shared<ExitParking>(exit_parking));
  }
  void saveFilling();
};

typedef std::shared_ptr<Parking> ParkingPtr;

#endif