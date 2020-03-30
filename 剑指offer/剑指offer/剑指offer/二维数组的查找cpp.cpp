class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
		{
			return false;
		}
		size_t row = 0;
		size_t col = array[0].size() - 1;
		for (; row < array.size(); ++row)
		{
			while (col != -1)
			{
				if (target > array[row][col])
				{
					break;;
				}
				else if (target < array[row][col])
				{
					--col;
				}
				else
				{
					return true;
				}
			}
		}
		return false;
	}
};


class Solution2 {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
		{
			return false;
		}
		size_t row = 0;
		size_t col = array[0].size() - 1;
		for (; row < array.size(); ++row)
		{
			while (col != -1)
			{
				if (target > array[row][col])
				{
					break;;
				}
				else if (target < array[row][col])
				{
					--col;
				}
				else
				{
					return true;
				}
			}
		}
		return false;
	}
};