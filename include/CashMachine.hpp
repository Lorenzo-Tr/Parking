#ifndef __CASH_MACHINE_H__
#define __CASH_MACHINE_H__

#include <AcceptedPayment.hpp>

class CashMachine {
  int id_;
  AcceptedPayment current_payment_mode_;

 public:
  CashMachine();
  ~CashMachine();

  void choosePaymentMethod();
};

#endif