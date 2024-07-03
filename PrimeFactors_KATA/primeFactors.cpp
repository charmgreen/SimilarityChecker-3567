#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int number)
	{
		vector<int> res = {};
		if (number == 2) res.push_back(2);
		return res;
	}
};
