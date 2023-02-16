#include <Visitor.hpp>

void Visitor::GetATicket() {
  std::time_t now = time(nullptr);
  std::time_t limite = time(nullptr);

  // Add 72h to now to save the limite
  tm* tm = gmtime(&limite);
  tm->tm_mday += 3;
  limite = mktime(tm);

  Ticket ticket(now, limite);
  SetTicket(ticket);
}