/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int fd = (*dob1 - '0') * 10 + (*(dob1 + 1) - '0');
	int sd = (*dob2 - '0') * 10 + (*(dob2 + 1) - '0');
	int fm = (*(dob1 + 3) - '0') * 10 + (*(dob1 + 4) - '0');
	int sm = (*(dob2 + 3) - '0') * 10 + (*(dob2 + 4) - '0');
	int sy = (*(dob2 + 6) - '0') * 1000 + (*(dob2 + 7) - '0') * 100 + (*(dob2 + 8) - '0') * 10 + (*(dob2 + 9) - '0');
	int fy = (*(dob1 + 6) - '0') * 1000 + (*(dob1 + 7) - '0') * 100 + (*(dob1 + 8) - '0') * 10 + (*(dob1 + 9) - '0');
	
	if ((fd > 31) || (sd> 31) || (fd< 1) || (sd<1))
	{
		return -1;
	}
	if ((fm>12) || (sm>12) || (fm<1) || (sm < 1))
	{
		return -1;

	}
	if (fy % 400 == 0)
	{
		if (fm == 2 && fd>29)
		{
			return -1;
		}
	}
	else if (fy % 100 == 0)
	{
		if (fm == 2 && fd>28)
		{
			return -1;
		}

	}
	else if (fy % 4 == 0)
	{
		if (fm == 2 && fd>29)
		{
			return -1;
		}
	}
	else
	{
		if (fm == 2 && fd>28)
		{
			return -1;
		}
	}
	if (sy % 400 == 0)
	{
		if (sm == 2 && sd>29)
		{
			return -1;
		}
	}
	else if (sy % 100 == 0)
	{
		if (sm == 2 && sd>28)
		{
			return -1;
		}

	}
	else if (sy % 4 == 0)
	{
		if (sm == 2 && sd>29)
		{
			return -1;
		}
	}
	else
	{
		if (sm == 2 && sd>28)
		{
			return -1;
		}
	}

	if (fy < sy)
	{
		return 1;
	}
	else if (fy == sy)
	{
		if (fm < sm)
		{
			return 1;
		}
		else if (fm == sm)
		{
			if (fd == sd)
			{
				return 0;
			}
			else if (fd < sd)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else
		{
			return 2;
		}
	}

	else
	{
		return 2;

	}

	return 0;
}
