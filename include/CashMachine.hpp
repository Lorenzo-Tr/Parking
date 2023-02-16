#ifndef __CASH_MACHINE_H__
#define __CASH_MACHINE_H__

#include <AcceptedPayment.hpp>

class CashMachine {
  static int current_id;
  int id_;
  AcceptedPayment current_payment_mode_;

 public:
  CashMachine() : id_(current_id++) {}
  ~CashMachine();

  void choosePaymentMethod();
};

#endif