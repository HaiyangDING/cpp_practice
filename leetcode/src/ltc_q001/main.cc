#include <iostream>
#include <vector>

#include "ltc_q001twosum_sol1.h"

using namespace std;

int main() {

	vector<int> v = {3,2,4};

	// need to have an object to initialize class Solution
	Solution S;

	vector<int> v2 = S.twoSum(v, 6);

	// need an interator for printing the elements in a vector
	for (vector<int>::const_iterator i = v2.begin(); i != v2.end(); i++) {
		cout << *i << ' ';
	}

}