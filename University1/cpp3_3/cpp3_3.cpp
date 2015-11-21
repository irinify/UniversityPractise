#include<iostream>
using namespace std;

int main()
{
	int a, b, result;
	char op;
	cout << "Please input arithmetic expression:" << endl;
	cin >> a >> op >> b;//op=operatorÔËËã·û

	while (a!=0&&op!=0&&b!=0)
	{
		switch (op)
		{
		case'+':result = a + b;
			cout << a << op << b << "=" << result << endl;break;
		case'-':result = a - b;
			cout << a << op << b << "=" << result << endl;break;
		case'*':result = a*b;
			cout << a << op << b << "=" << result << endl;break;
		case'/':result = a / b;
			cout << a << op << b << "=" << result << endl;break;
		}
		cout<< "Please input arithmetic expression:" << endl;
		cin >> a >> op >> b;//op=operatorÔËËã·û
		if (a == 0 || op == 0 || b == 0)break;
	}
}