#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include <vector>

using namespace testing;

class PrimeFixtures : public Test {
public:
	PrimeFactors prime_factors;
	vector<int> expected;

protected:	
	void SetUp() override {
	
	}
	void TearDown() override {

	}
};

TEST_F(PrimeFixtures, Of1) {

	expected = {};

	EXPECT_EQ(expected, prime_factors.of(1));
}

TEST_F(PrimeFixtures, Of2) {

	expected = {2};

	EXPECT_EQ(expected, prime_factors.of(2));
}

TEST_F(PrimeFixtures, Of3) {

	expected = {3};

	EXPECT_EQ(expected, prime_factors.of(3));
}

TEST_F(PrimeFixtures, Of4) {

	expected = {2, 2};

	EXPECT_EQ(expected, prime_factors.of(4));
}

TEST_F(PrimeFixtures, Of6) {

	expected = {2, 3};

	EXPECT_EQ(expected, prime_factors.of(6));
}

TEST_F(PrimeFixtures, Of9) {

	expected = {3, 3};

	EXPECT_EQ(expected, prime_factors.of(9));
}

