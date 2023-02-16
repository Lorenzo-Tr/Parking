#ifndef __CLIENT_H__
#define __CLIENT_H__

#include <memory>

class Client {
  static int current_id;
  int id_;

 public:
  Client() : id_(current_id++) {}
  virtual ~Client();
  virtual bool pay() = 0;

  inline int GetId() const { return id_; }
};

typedef std::shared_ptr<Client> ClientPtr;

#endif