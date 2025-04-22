#include <iostream>
#include "header.h"
using namespace std;
int main()
{
	int a, b, result=0;
	cout << "Enter a and b";
	cin >> a >> b;
	result = addition(a, b);
	cout << "Sum is " << result;
	return 0;
}



