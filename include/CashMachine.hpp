#ifndef __CASH_MACHINE_H__
#define __CASH_MACHINE_H__

#include <AcceptedPayment.hpp>

class CashMachine {
  int id_;
  static int current_id;
  AcceptedPayment current_payment_mode_;

 public:
  CashMachine() : id_(current_id++) {}
  ~CashMachine() = default;

  void choosePaymentMethod();
};

#endif