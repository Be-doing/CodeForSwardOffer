class Solution {
public:
	int Fibonacci(int n) {
		int fib1 = 0;
		int fib2 = 1;
		int retfib = 0;
		if (n == 0) {
			return fib1;
		}
		else if (n == 1) {
			return fib2;
		}
		else {
			for (int i = 2; i <= n; ++i) {
				retfib = fib1 + fib2;
				fib1 = fib2;
				fib2 = retfib;
			}
			return retfib;
		}
	}
};