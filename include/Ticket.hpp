#ifndef __TICKET_H__
#define __TICKET_H__

#include <ctime>

class Ticket {
  int id_;
  std::time_t enterDate_;
  std::time_t limiteDate_;
  float price_;

 public:
  Ticket(std::time_t, std::time_t);
  ~Ticket();

  int GetId() const { return id_; }
  std::time_t GetEnterDate() const { return enterDate_; }
  std::time_t GetLimiteDate() const { return limiteDate_; }
  float GetPrice() const { return price_; }

  void SetId(int id) { id_ = id; }
  void SetEnterDate(std::time_t enterDate) { enterDate_ = enterDate; }
  void SetLimiteDate(std::time_t limiteDate) { limiteDate_ = limiteDate; }
  void SetPrice(float price) { price_ = price; }

  void calculatePrice();
  void saveDuration();
};

#endif