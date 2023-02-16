#ifndef __TICKET_H__
#define __TICKET_H__

#include <ctime>

class Ticket {
  int id_;
  std::time_t enterDate_;
  std::time_t limiteDate_;
  float price_;

 public:
  Ticket(std::time_t enter, std::time_t limite)
      : enterDate_(enter), limiteDate_(limite) {}
  ~Ticket();

  inline int GetId() const { return id_; }
  inline std::time_t GetEnterDate() const { return enterDate_; }
  inline std::time_t GetLimiteDate() const { return limiteDate_; }
  inline float GetPrice() const { return price_; }

  // void SetId(int id) { id_ = id; }
  inline void SetEnterDate(std::time_t enterDate) { enterDate_ = enterDate; }
  inline void SetLimiteDate(std::time_t limiteDate) {
    limiteDate_ = limiteDate;
  }
  inline void SetPrice(float price) { price_ = price; }

  void calculatePrice();
  void saveDuration();
};

#endif