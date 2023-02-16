#ifndef __PARKING_H__
#define __PARKING_H__

#include <CashMachine.hpp>
#include <EnterParking.hpp>
#include <ExitParking.hpp>
#include <ctime>

using namespace std;

class Parking {
  int id_;
  CashMachine cash_machine_;
  int capacity_;
  int price_;
  time_t opening_hours_;
  EnterParking enter_parking_;
  ExitParking exit_parking_;

 public:
  int GetId() const { return id_; }
  CashMachine GetCash_machine() const { return cash_machine_; }
  int GetCapacity() const { return capacity_; }
  int GetPrice() const { return price_; }
  time_t GetOpening_hours() const { return opening_hours_; }
  EnterParking GetEnter_parking() const { return enter_parking_; }
  ExitParking GetExit_parking() const { return exit_parking_; }

  void SetId(int id) { id_ = id; }
  void SetCash_machine(CashMachine cash_machine) {
    cash_machine_ = cash_machine;
  }
  void SetCapacity(int capacity) { capacity_ = capacity; }
  void SetPrice(int price) { price_ = price; }
  void SetOpening_hours(time_t opening_hours) {
    opening_hours_ = opening_hours;
  }
  void SetEnter_parking(EnterParking enter_parking) {
    enter_parking_ = enter_parking;
  }
  void SetExit_parking(ExitParking exit_parking) {
    exit_parking_ = exit_parking;
  }

  void addEnterParking();
  void addExitParking();
  void saveFilling();
};

#endif