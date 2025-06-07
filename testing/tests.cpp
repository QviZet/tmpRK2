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

//......................................GTEST......................................

TEST(ConcretePrototype1, clone){
	ConcretePrototype1* newP = new ConcretePrototype1(10);
	ConcretePrototype1* test1 = newP->clone();
	EXPECT_EQ(test1->_a, 10);
}

TEST(ConcretePrototype2, clone){
	ConcretePrototype2* newP = new ConcretePrototype2(10);
	ConcretePrototype2* test2 = newP->clone();
	EXPECT_EQ(test2->_a, 10);
}

TEST(PrototypeCreator, createPrototype){
	PrototypeCreator* creator = new PrototypeCreator;
	Prototype* newClone = creator->createPrototype(Type::Concrete1);
	ConcretePrototype1* test3 = newClone->clone();
	EXPECT_EQ(test3->_a, 12);
}

//......................................GMOCK......................................

TEST(mockCon1, print){
	ConcretePrototype1* test4 = new ConcretePrototype1(10);
	EXPECT_CALL(test4, print())->Times(1);
}

TEST(mockCon2, print){
	ConcretePrototype2* test5 = new ConcretePrototype2(10);
	EXPECT_CALL(test5, print())->Times(1);
}

int main(int argc, char** argv) {
	::testing::FLAGS_gmock_verbose = "error";
	::testing::InitGoogleMock(&argc, argv);
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
