//	Solving the nth Fibonacci Number Using Iteration


#include <iostream>

unsigned int fib(unsigned int position);
int main() 
{//	using std::cout; using std::endl; using std::cin;
	using namespace std;
	unsigned int answer, position;
	cout << "Which position? ";
	cin >> position;
	cout << endl;

	answer = fib(position);
	cout << answer << " is the ";
	cout << position << "th Fibonacci number. " << endl;
	return 0;
}

unsigned int fib(unsigned int n)
{
	unsigned int minusTwo = 1, minusOne = 1, answer = 2;

	if (n < 3)
		return 1;

	for (n -= 3; n != 0; n--)
	{
		minusTwo = minusOne;
		minusOne = answer;
		answer = minusOne + minusTwo;
	}

	return answer;
}/*
Output ▼
Which position ? 4
3 is the 4th Fibonacci number.
Which position ? 5
5 is the 5th Fibonacci number.
Which position ? 20
6765 is the 20th Fibonacci number.
Which position ? 100
3314859971 is the 100th Fibonacci number.
Analysis ▼
Listing 7.15 solves the Fibonacci series using iteration rather than recursion.This
approach is faster and uses less memory than the recursive solution.
On line 11, the user is asked for the position to check.The function fib() is called,
which evaluates the position.If the position is less than 3, the function returns the value
1. Starting with position 3, the function iterates using the following algorithm :
1. Establish the starting position : Fill variable answer with 2, minusTwo with 1, and
minusOne with 1. Decrement the position by 3 because the first two numbers are
handled by the starting position.
2. For every number, count up the Fibonacci series.This is done by
A.Putting the value currently in minusOne into minusTwo
B.Putting the value currently in answer into minusOne
C.Adding minusOne and minusTwo and putting the sum in answer
D.Decrementing n
3. When n reaches 0, return the answer.
This is exactly how you would solve this problem with pencil and paper.If you were
asked for the fifth Fibonacci number, you would write
1, 1, 2,
and think, “two more to do.” You would then add 2 + 1 and write 3, and think, “one more
to find.” Finally, you would write 3 + 2 and the answer would be 5. In effect, you are
shifting your attention right one number each time through and decrementing the number
remaining to be found.
Note the condition tested on line 28 (n != 0).Many C++ programmers use the following
for line 28:
for (n -= 3; n; n--)
Summing Up Loops 191
7
You can see that instead of using a relational condition, just the value of n is used for the
condition in the for statement.This is a C++ idiom, and n is considered equivalent to n
!= 0. Using just n relies on the fact that when n reaches 0, it will evaluate as false
because 0 has been considered as false in C++.In keeping with the current C++ standards,
it is better to rely on a condition to evaluate to the value of false than to use a
numeric value.
Compile, link, and run this program, along with the recursive solution offered in Lesson
6. Try finding position 25 and compare the time it takes each program.Recursion is elegant,
but because the function call brings a performance overhead, and because it is
called so many times, its performance is noticeably slower than iteration.
Microcomputers tend to be optimized for the arithmetic operations, so the iterative solution
should be blazingly fast.
Be careful how large a number you enter.fib grows quickly, and even unsigned long
integers will overflow after a while.*/