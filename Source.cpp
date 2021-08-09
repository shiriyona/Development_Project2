#include <iostream>
using namespace std;
//question 3 tg 5
int main()
{
	int num1, num2, num3, smallest, middle, biggest;
	cout << "enter 3 numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	if (num1 > num2)
	{
		//num1 is the big
		if (num1 > num3) 
		{
			biggest = num1;
			//checks middle
			if (num2 > num3)
			{
				middle = num2;
				smallest = num3;
			}
			else
			{
				middle = num3;
				smallest = num2;
			}
		}
		//num3 is the big
		else 
		{
			biggest = num3;
			//checks middle
			if (num1 > num2)
			{
				middle = num1;
				smallest = num2;
			}
			else
			{
				middle = num2;
				smallest = num1;
			}

		}
	}
	//num2 is the big
	else
	{
		biggest = num2;
		if (num1 > num3)
		{
			middle = num1;
			smallest = num3;
		}
		else
		{
			middle = num3;
			smallest = num1;
		}
	}
	cout << smallest << " " << middle << " " << biggest << endl;
	return 0;
}