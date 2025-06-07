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

int main(int argc, char** argv) {
    ::testing::FLAGS_gmock_verbose = "error";
	::testing::InitGoogleMock(&argc, argv);
    ::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}
