#ifndef __TERMINAL_H__
#define __TERMINAL_H__

class Terminal {
  int id_;

 public:
  Terminal();
  ~Terminal();

  int GetId() const { return id_; }

  void SetId(int id) { id_ = id; }

  int readMemberCard();
  int readCreaditCard();
  void printTicket();
};

#endif