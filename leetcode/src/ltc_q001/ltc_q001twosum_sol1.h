#include <vector>

using namespace std;

// This is a brutal force solution
// Computational Complexity is O(n^2), since in the worst case,
// the iterator would loop through the vector twice

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i=0; i < nums.size(); i++) {
            for (int j=i+1; j < nums.size() ; j++) {
                if (nums[i] + nums[j]== target) {
                    vector<int> result = {i, j};
                    return result;
                }
            }
        }
    }
};