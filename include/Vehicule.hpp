
#ifndef __VEHICULE_H__
#define __VEHICULE_H__

#include <memory>
#include <string>

class Vehicule;

typedef std::shared_ptr<Vehicule> VehiculePtr;

class Vehicule {
  int id_;
  static int current_id;
  std::string marque_;
  std::string license_plate_;

 public:
  Vehicule(std::string marque, std::string license_plate)
      : id_(current_id++), marque_(marque), license_plate_(license_plate) {}

  inline int GetId() const { return id_; }
  inline std::string GetMarque() const { return marque_; }
  inline std::string GetLicense() const { return license_plate_; }

  // void SetId(int id) { id_ = id; }
  inline void SetGetMarque(std::string marque) { marque_ = marque; }
  inline void SetLicense(std::string license_plate) {
    license_plate_ = license_plate;
  }
};

int Vehicule::current_id;

#endif