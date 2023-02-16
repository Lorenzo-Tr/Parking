#ifndef __PARKING_H__
#define __PARKING_H__

#include <CashMachine.hpp>
#include <EnterParking.hpp>
#include <ExitParking.hpp>
#include <ctime>
#include <vector>

class Parking {
  int id_;
  CashMachine cash_machine_;
  int capacity_;
  int price_;
  std::time_t opening_hours_;
  std::vector<EnterParkingPtr> enter_parking_;
  std::vector<ExitParkingPtr> exit_parking_;

 public:
  int GetId() const { return id_; }
  CashMachine GetCash_machine() const { return cash_machine_; }
  int GetCapacity() const { return capacity_; }
  int GetPrice() const { return price_; }
  std::time_t GetOpening_hours() const { return opening_hours_; }
  std::vector<EnterParkingPtr> GetEnter_parking() const {
    return enter_parking_;
  }
  std::vector<ExitParkingPtr> GetExit_parking() const { return exit_parking_; }

  void SetId(int id) { id_ = id; }
  void SetCash_machine(CashMachine cash_machine) {
    cash_machine_ = cash_machine;
  }
  void SetCapacity(int capacity) { capacity_ = capacity; }
  void SetPrice(int price) { price_ = price; }
  void SetOpening_hours(std::time_t opening_hours) {
    opening_hours_ = opening_hours;
  }
  void SetEnter_parking(EnterParking enter_parking) {
    enter_parking_.push_back(std::make_shared<EnterParking>(enter_parking));
  }
  void SetExit_parking(ExitParking exit_parking) {
    exit_parking_.push_back(std::make_shared<ExitParking>(exit_parking));
  }

  void addEnterParking();
  void addExitParking();
  void saveFilling();
};

#endif