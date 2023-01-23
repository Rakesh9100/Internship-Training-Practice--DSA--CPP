/*
Take two numbers as input, say N1 and N2. Write a program which prints first N1 terms of the series 9*(N1) + 7 which are not multiples of N2.
*/

#include<iostream>
using namespace std;

int main()
{
	int N1, N2;
	cout<<"Please enter N1: ";
	cin >> N1;
	cout<<"Please enter N2: ";
	cin >> N2;

	int count = 0, i = 0;
	while(count < N1)
	{
		if((9*i+7) % N2 != 0)
		{
			cout << (9*i+7) << " ";
			count++;
		}
		i++;
	}
    return 0;
}