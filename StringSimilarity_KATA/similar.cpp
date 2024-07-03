#include <string>
using namespace std;

class StringSimilarity
{
public:
	int getLengthScore(string s1, string s2)
	{
		if (s1.length() == s2.length())
			return 60;
		else if (s1.length() >= s2.length() * 2
			|| s1.length() * 2 <= s2.length())
		{
			return 0;
		}
		else
		{
			int B = 0;
			int A = 0;
			if (s1.length() < s2.length())
			{
				B = s1.length();
				A = s2.length();
			}
			else 
			{
				A = s1.length();
				B = s2.length();
			}

			int score = (1 - (double)(A - B) / B) * 60;
			return score;
		}
	}
};
