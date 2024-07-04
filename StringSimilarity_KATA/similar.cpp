#include <string>
using namespace std;

class StringSimilarity
{
public:
	int getLengthScore(string s1, string s2)
	{
		if (isSameLength(s1, s2)) return MAX_LENGTH_SCORE;
		if (isDoubleGapLength(s1, s2)) return MIN_LENGTH_SCORE;

		int longLen = getLongLength(s1, s2);
		int shortLen = getShortLength(s1, s2);
		int score = MAX_LENGTH_SCORE - MAX_LENGTH_SCORE * (longLen - shortLen) / shortLen;
		return score;
	}
private:
	bool isSameLength(string str1, string str2) {
		return (str1.length() == str2.length());
	}

	bool isDoubleGapLength(string str1, string str2) {
		return (str1.length() >= str2.length() * 2
			|| str1.length() * 2 <= str2.length());
	}

	int getLongLength(string str1, string str2) {
		return (str1.length() > str2.length()) ? str1.length() : str2.length();
	}

	int getShortLength(string str1, string str2) {
		return (str1.length() < str2.length()) ? str1.length() : str2.length();
	}

	const int MAX_LENGTH_SCORE = 60;
	const int MIN_LENGTH_SCORE = 0;
};
