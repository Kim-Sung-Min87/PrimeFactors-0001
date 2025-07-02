#include <vector>

using std::vector;

class PrimeFactors {
private:

public:
	vector<int> of(int number) {
		vector<int> result;
		if (number == 2) {
			result.push_back(2);
		}
		return result;
	}
};