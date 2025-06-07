#include "Header.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::_;

class mockCon1 : public ConcretePrototype1 {
public:
    MOCK_METHOD(void, print, (), (override));
};

class mockCon2 : public ConcretePrototype2 {
public:
    MOCK_METHOD(void, print, (), (override));
};

class mockCreator : public PrototypeCreator {
public:
    MOCK_METHOD(Prototype*, createPrototype, (Type t), ());
};

//......................................gtest......................................

TEST(ConcretePrototype1, clone){
	ConcretePrototype1* newP = new ConcretePrototype1(10);
	ConcretePrototype1* test1 = newP->clone();
	EXPECT_EQ("concrete 1: 10", test1->print());
}

TEST(ConcretePrototype2, clone){
	ConcretePrototype2* newP = new ConcretePrototype2(10);
	ConcretePrototype2* test2 = newP->clone();
	EXPECT_EQ("concrete 1: 10", test2->print());
}

int main(int argc, char** argv) {
	::testing::FLAGS_gmock_verbose = "error";
	::testing::InitGoogleMock(&argc, argv);
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
