#ifndef __CLIENT_H__
#define __CLIENT_H__

class Client {
  static int current_id;
  int id_;

 public:
  Client() : id_(current_id++) {}
  virtual ~Client();
  virtual bool pay() = 0;
};
#endif