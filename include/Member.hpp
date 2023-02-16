#ifndef __MEMBER_H__
#define __MEMBER_H__
#include <Client.hpp>
#include <string>

class Member : public Client {
  int cid_;
  int balance_;
  std::string last_name_;
  std::string first_name_;
  std::string address_;

 public:
  int GetCid() const { return cid_; }
  int GetBalance() const { return balance_; }
  std::string GetLastname() const { return last_name_; }
  std::string GetFirstname() const { return first_name_; }
  std::string GetAddress() const { return address_; }

  void SetId(int cid) { cid_ = cid; }
  void SetBalance(int balance) { balance_ = balance; }
  std::string SetLastname(std::string last_name) { last_name_ = last_name; }
  std::string SetFirsname(std::string first_name) { first_name_ = first_name; }
  std::string SetAddress(std::string address) { address_ = address; }
};

#endif