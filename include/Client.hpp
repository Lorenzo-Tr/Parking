#ifndef __CLIENT_H__
#define __CLIENT_H__

class Client {
  int id_;

 public:
  virtual ~Client();
  virtual bool pay() = 0;
};
#endif