#ifndef __POUND_H__
#define __POUND_H__

#include <Vehicule.hpp>
#include <list>

class Pound {
  int id_;
  std::list<VehiculePtr> vehicule_;

 public:
  inline int GetId() const { return id_; }
  inline std::list<VehiculePtr> Getvehicule() const { return vehicule_; }

  // void SetId(int id) { id_ = id; }
  // void SetVehicule(Vehicule vehicule) { vehicule_ = vehicule; }
  inline void addVehicule(VehiculePtr vehicule) {
    vehicule_.push_back(vehicule);
  }
  inline void removeVehicule(std::list<VehiculePtr>::iterator id) {
    vehicule_.erase(id);
  }
};
#endif