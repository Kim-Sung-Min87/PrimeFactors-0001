#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include <vector>

using namespace testing;

TEST(PrimeFactors, Of1) {

	PrimeFactors prime_factors;
	vector<int> expected = {};

	EXPECT_EQ(expected, prime_factors.of(1));
}