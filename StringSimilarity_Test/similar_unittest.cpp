#include "pch.h"
#include "../StringSimilarity_KATA/similar.cpp"

class StringSimilarityTestFixture : public testing::Test {
public:
	StringSimilarity ss;
	void lengthTest(int expected, string str1, string str2) {
		EXPECT_EQ(expected, ss.getLengthScore(str1, str2));
	}
};

TEST_F(StringSimilarityTestFixture, WhenSameLength) {
	//int score = ss.getLengthScore("ASD", "DSA");
	//EXPECT_EQ(60, score);
	lengthTest(60, "ASD", "DSA");
}

TEST_F(StringSimilarityTestFixture, WhenOneIsMore2timesThanTheOther) {
	//int score = ss.getLengthScore("A", "BB");
	//EXPECT_EQ(0, score);
	lengthTest(0, "A", "BB");
}

TEST_F(StringSimilarityTestFixture, PartialScore1) {
	//int score = ss.getLengthScore("AAABB", "BAA");
	//EXPECT_EQ(20, score);
	lengthTest(20, "AAABB", "BAA");
}

TEST_F(StringSimilarityTestFixture, PartialScore2) {
	//int score = ss.getLengthScore("AA", "AAE");
	//EXPECT_EQ(30, score);
	lengthTest(30, "AA", "AAE");
}

TEST_F(StringSimilarityTestFixture, PartialScore3) {
	lengthTest(0, "", "CAE");
}
