#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int number)
	{
		vector<int> res = {};

		if (number > 1) {
			for (int divisor = 2; number > 1; divisor++)
			{
				while (number % divisor == 0)
				{
					res.push_back(divisor);
					number /= divisor;
				}
			}
		}

		return res;
	}
};
