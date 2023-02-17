#ifndef __VISITOR_H__
#define __VISITOR_H__

#include <Client.hpp>
#include <Ticket.hpp>

class Visitor;

typedef std::shared_ptr<Visitor> VisitorPtr;

class Visitor : public Client {
  TicketPtr ticket_;

 public:
  Visitor() : Client(), ticket_(nullptr) {}
  ~Visitor() {}

  inline TicketPtr GetTicket() const { return ticket_; }

  inline void SetTicket(Ticket* ticket) { ticket_ = TicketPtr(ticket); }

  void getATicket();
  bool checkCreditCard();
  bool checkTicketValidity();
  bool pay() { return true; }
};

#endif