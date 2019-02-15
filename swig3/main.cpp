#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include "no_args.h"
using namespace std;


int main()
{
	int result;
	result = numnum_arg(7, 3);
	cout << result << endl;
	int arr[] = { 1, 2 };
	int arr2[] = { 1, 2 };
	cout << arr2[1] << endl;

	int arr3[5] = {1, 2, 3, 4, 5};
	std::vector<int> ve;
	ve.assign (arr3, arr3 + 5);

	std::vector<int> vec = vect(ve);
	
	std::string st;
	st = "neki neki";
	cout << stri(st) << endl;

	return 0;
}