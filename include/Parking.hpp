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
  void addEnterParking();
  void addExitParking();
  void saveFilling();
};

#endif