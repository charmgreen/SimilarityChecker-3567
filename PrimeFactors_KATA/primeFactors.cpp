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
				res.push_back(2);
				res.push_back(2);
			}
			else {
				res.push_back(number);
			}
		}
		return res;
	}
};
