#ifndef __CLIENT_H__
#define __CLIENT_H__

#include <memory>

class Client;

typedef std::shared_ptr<Client> ClientPtr;

class Client {
  int id_;
  static int current_id;

 public:
  Client() : id_(current_id++) {}
  virtual ~Client() {}

  inline int GetId() const { return id_; }

  virtual bool pay() = 0;
};

#endif