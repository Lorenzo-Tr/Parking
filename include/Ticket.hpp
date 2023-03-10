#ifndef __TICKET_H__
#define __TICKET_H__

#include <ctime>
#include <memory>

class Ticket;

typedef std::shared_ptr<Ticket> TicketPtr;

class Ticket {
  int id_;
  static int current_id;
  std::time_t enterDate_;
  std::time_t limiteDate_;
  float price_;

 public:
  Ticket() = default;
  Ticket(std::time_t enter, std::time_t limite)
      : id_(current_id++), enterDate_(enter), limiteDate_(limite) {}
  ~Ticket() = default;

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