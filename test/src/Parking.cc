#include <gtest/gtest.h>
#include <Member.hpp>
#include <Parking.hpp>
#include <Visitor.hpp>

class ParkingEnvironment : public ::testing::Environment {
 public:
  static ParkingPtr getParking() {
    static ParkingPtr parking = std::make_shared<Parking>(130, 1.30F);
    return parking;
  }

  void addParkingEnter() { getParking()->addEnterParking(new EnterParking()); }
  void addParkingExit() {
    getParking()->addExitParking(new ExitParking());
    getParking()->GetEnter_parking()[0]->addParkingLane(new ParkingLane());
  }

  virtual void SetUp() {
    addParkingEnter();
    addParkingExit();
  }
};

typedef std::shared_ptr<ParkingEnvironment> ParkingEnvironmentPtr;

class VisitorEnvironment : public ::testing::Environment {
 public:
  static ClientPtr getClient() {
    static ClientPtr Client = std::make_shared<Visitor>();
    return Client;
  }
};

class ParkingMainTest : public ::testing::Test {
 protected:
  virtual void SetUp() { parking_ = ParkingEnvironment::getParking(); }
  ParkingPtr parking_;
};

ParkingEnvironmentPtr AddGlobalTestEnvironment(ParkingEnvironment* env);

TEST_F(ParkingMainTest, Ticket) {}