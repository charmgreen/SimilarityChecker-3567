#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int number)
	{
		vector<int> res = {};
		if (number > 1) {
			if (number == 4)
			{
				while (number % 2 == 0)
				{
					res.push_back(2);
					number /= 2;
				}
			}
			else {
				res.push_back(number);
			}
		}
		return res;
	}
};
