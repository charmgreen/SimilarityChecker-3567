#include "pch.h"
#include "../Baseball_KATA/baseball.cpp"
#include <string>
using namespace std;

TEST(BaseballGame, ThrowExceptionWhenInputLengthIsUnmatched) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}
