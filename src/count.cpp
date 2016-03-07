/*
OVERVIEW:  Given 2 integers (num1, num2), write a function that returns the count of numbers between the num1..num2 that are divisible by num1.
		E.g.: count(3, 15) returns 5 (3, 6, 9, 12, 15).
		Note : You need to consider Inclusive range
INPUTS:  Two numbers num1, num2.
		num1, num2 >= 0.

OUTPUT: Return the count of numbers between the num1..num2 that are divisible by num1.

ERROR CASES: Return -1 in error cases.

NOTES:
*/
int count(int num1, int num2) {
	int f = num1, s = num2;
	int c = 0;
	
	if (f == s)
	{
		return 0;
	}
	if (s < 0 || f<0 || f==0)
	{
		return -1;
	}
	if (s == 0)
	{
		return 0;
	}
	
	if (f == 1 && s > 0)
	{
		return s;
	}
	for (int i = f; i <= s; i++)
	{
		if (i%f == 0)
		{
			c++;
		}
	}
	return c;


	
}