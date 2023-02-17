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
  virtual ~Client() = default;
  virtual bool pay() = 0;

  inline int GetId() const { return id_; }
};

int Client::current_id;

#endif