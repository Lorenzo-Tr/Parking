#ifndef __VISITOR_H__
#define __VISITOR_H__

#include <Client.hpp>
#include <Ticket.hpp>

class Visitor : public Client {
  Ticket ticket_;

 public:
  Visitor() : Client(), ticket_() {}
  ~Visitor() = default;

  inline Ticket GetTicket() const { return ticket_; }

  inline void SetTicket(Ticket ticket) { ticket_ = ticket; }

  void getATicket();
  bool checkCreditCard();
  bool checkTicketValidity();
  bool pay();
};
#endif