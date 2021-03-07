// A Demonstration of Recursion Using the Fibonacci Series - this is difficult to understand
#include <iostream>
int fib(int n);

int main() 
{	using std::cout; using std::endl; using std::cin;
	
	int n, answer;
	cout << "Enter number to find: ";
	cin >> n;

	cout << "\n" << endl;

	answer = fib(n);

	cout << answer << " is the " << n;
	cout << "th Fibonacci number\n";
	return 0;
}

int fib(int n)
{
	std::cout << "Processing fib(" << n << ")...";

	if (n < 3)
	{
		std::cout << "Return 1!\n";
		return (1);
	}
	else
	{
		std::cout << "Call fib(" << n-2 << ") ";
		inline int Double(int);
		std::cout << "and fib(" << n - 1 << ").\n";
		return(fib(n - 2) + fib(n - 1));
	}
}