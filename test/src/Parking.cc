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
  static VisitorPtr getVisitor() {
    static ClientPtr visitor = std::make_shared<Visitor>();
    return std::dynamic_pointer_cast<Visitor>(visitor);
  }
};

class MemberEnvironment : public ::testing::Environment {
 public:
  static MemberPtr getMember() {
    static ClientPtr member =
        std::make_shared<Member>(15043, 50, "Doe", "John", "Here at 50 avenue");
    return std::dynamic_pointer_cast<Member>(member);
  }
};

class ParkingMainTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    parking_ = ParkingEnvironment::getParking();
    visitor_ = VisitorEnvironment::getVisitor();
    member_ = MemberEnvironment::getMember();
  }
  ParkingPtr parking_;
  VisitorPtr visitor_;
  MemberPtr member_;
};

ParkingEnvironmentPtr AddGlobalTestEnvironment(ParkingEnvironment* env);

TEST_F(ParkingMainTest, Ticket) {
  visitor_->getATicket();

  EXPECT_EQ(time(0), visitor_->GetTicket()->GetEnterDate());

  EXPECT_EQ(1, 1);
}