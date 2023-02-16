#include <gtest/gtest.h>
#include <Parking.hpp>

class ParkingEnvironment : public ::testing::Environment {
 public:
  static ParkingPtr getParking() {
    static ParkingPtr parking = std::make_shared<Parking>();
    return parking;
  }

  void addParkingEnter() { getParking()->addEnterParking(new EnterParking()); }
  void addParkingExit() {
    getParking()->addExitParking(new ExitParking());
    getParking()->GetEnter_parking()[0]->addParkingLane(new ParkingLane())
  }

  virtual void SetUp() {
    addParkingEnter();
    addParkingExit();
  }
};

typedef std::shared_ptr<ParkingEnvironment> ParkingEnvironmentPtr;

class ParkingMainTest : public ::testing::Test {
 protected:
  virtual void SetUp() { parking_ = ParkingEnvironment::getParking(); }
  ParkingPtr parking_;
};

ParkingEnvironmentPtr AddGlobalTestEnvironment(ParkingEnvironment* env);

TEST_F(ParkingMainTest, Ticket) {}