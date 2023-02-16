#ifndef __POUND_H__
#define __POUND_H__
#include <Vehicule.hpp>

class Pound {
  int id_;
  Vehicule vehicule_;

 public:
  int GetId() const { return id_; }
  Vehicule Getvehicule() const { return vehicule_; }

  void SetId(int id) { id_ = id; }
  void SetVehicule(Vehicule vehicule) { vehicule_ = vehicule; }
  void addVehicule();
  void removeVehicule();
};
#endif