class Solution {
public:
	void replaceSpace(char *str, int length) {
		if (length && str) {
			string tmp;
			for (int i = 0; i < length; ++i) {
				if (str[i] == ' ') {
					tmp += "%20";
				}
				else {
					tmp += str[i];
				}
			}
			free(str);
			str = (char*)malloc(tmp.size());
			strcpy(str, tmp.c_str());
		}
	}
};