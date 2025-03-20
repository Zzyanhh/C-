/*
#include <iostream>
using namespace std;

const int Asize = 16;

int main()
{
	long long factorials[Asize];
	factorials[0] = factorials[1] = 1LL;
	for (int i = 2; i < Asize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < Asize; i++)
		cout << i << "! = " << factorials[i] << endl;;
	return 0;
}

*/