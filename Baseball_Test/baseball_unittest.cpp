#include "pch.h"
#include "../Baseball_KATA/baseball.cpp"
#include <string>
using namespace std;

class BaseballFixture : public testing::Test {
public:
	Baseball game;
	void assertIllegalArgument(string guessNumber) {
		try {
			game.guess(guessNumber);
			FAIL();
		}
		catch (...) {
			// PASS
		}
	}
};

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidCase) {
	Baseball game;
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");
}

