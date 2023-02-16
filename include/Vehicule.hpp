
#ifndef __VEHICULE_H__
#define __VEHICULE_H__
#include <string>

class Vehicule {
  int id_;
  std::string marque_;
  std::string license_plate_;

 public:
  int GetId() const { return id_; }
  std::string GetMarque() const { return marque_; }
  std::string GetLicense() const { return license_plate_; }

  void SetId(int id) { id_ = id; }
  void SetGetMarque(std::string marque) { marque_ = marque; }
  void SetLicense(std::string license_plate) { license_plate_ = license_plate; }
};
#endif