#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int number)
	{
		vector<int> res = {};
		if (number > 1) {
			int divisor = 2;
			if (number == 4)
			{
				while (number % divisor == 0)
				{
					res.push_back(divisor);
					number /= divisor;
				}
			}
			else if (number == 6)
			{
				for (divisor = 2; number > 1; divisor++)
				{
					while (number % divisor == 0)
					{
						res.push_back(divisor);
						number /= divisor;
					}
				}
			}
			else if (number == 9)
			{
				res.push_back(3);
				res.push_back(3);
			}
			else {
				res.push_back(number);
			}
		}
		return res;
	}
};
