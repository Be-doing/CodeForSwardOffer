class Solution {
public:
	void reOrderArray(vector<int> &array) {
		if (array.empty())
		{
			return;
		}
		for (size_t i = 0; i < array.size() - 1; ++i)
		{
			for (size_t j = 0; j < array.size() - i; ++j)
			{
				if (array[j] % 2 == 0 && array[j + 1] % 2 != 0)
				{
					swap(array[j], array[j + 1]);
				}
			}
		}
	}
};