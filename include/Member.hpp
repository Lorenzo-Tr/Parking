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
  Member(int cid,
         int balance,
         std::string last_name,
         std::string first_name,
         std::string address)
      : Client(),
        cid_(cid),
        balance_(balance),
        last_name_(last_name),
        first_name_(first_name),
        address_(address) {}
  ~Member();

  inline int GetCid() const { return cid_; }
  inline int GetBalance() const { return balance_; }
  inline std::string GetLastname() const { return last_name_; }
  inline std::string GetFirstname() const { return first_name_; }
  inline std::string GetAddress() const { return address_; }

  // inline void SetCid(int cid) { cid_ = cid; }
  inline void SetBalance(int balance) { balance_ = balance; }
  inline std::string SetLastname(std::string last_name) {
    last_name_ = last_name;
  }
  inline std::string SetFirsname(std::string first_name) {
    first_name_ = first_name;
  }
  inline std::string SetAddress(std::string address) { address_ = address; }
};

#endif