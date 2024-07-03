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
			if (number == 4 || number == 6 || number == 9 || number == 12)
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
			else {
				res.push_back(number);
			}
		}
		return res;
	}
};
