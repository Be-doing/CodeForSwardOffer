class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.empty()) {
			return 0;
		}
		int minval = rotateArray[0];
		for (size_t i = 1; i < rotateArray.size(); ++i) {
			if (minval > rotateArray[i]) {
				minval = rotateArray[i];
			}
		}
		return minval;
	}
};