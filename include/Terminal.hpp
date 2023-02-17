#ifndef __TERMINAL_H__
#define __TERMINAL_H__

class Terminal {
  int id_;
  static int current_id;

 public:
  Terminal() : id_(current_id++) {}
  ~Terminal() = default;

  int GetId() const { return id_; }

  // void SetId(int id) { id_ = id; }

  int readMemberCard();
  int readCreaditCard();
  void printTicket();
};

int Terminal::current_id;

#endif