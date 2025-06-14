#include "Header.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
using ::testing::_;

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

int main(int argc, char** argv) {
	::testing::FLAGS_gmock_verbose = "error";
	::testing::InitGoogleMock(&argc, argv);
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
