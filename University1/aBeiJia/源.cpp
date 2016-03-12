#include<iostream>
using namespace std;
int func(int);
int main()
{
	int a,S;
	cout << "shu ru a" << endl;
	cin >> a;
	if (a > 0 && a < 10)
	{
		S = func(a);
		cout << S;
	}
	else cout << "input wrong number";
	system("pause");
}
int func(int a)
{
	int sum = 0;
	for (int i = 0,e = 1;i  < a;i++)
	{
		sum += (a-i)*a*e;
		e *= 10;
		if (i + 1 < a)
			continue;
		else break;
	}
	return sum;
}