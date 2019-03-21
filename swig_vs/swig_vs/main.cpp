//#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include "no_args.h"
#include "fit_predict.h"
#include "nump.h"

using namespace std;

int main()
{
	//testing if works
	int result;
	result = numnum_arg(7, 3);
	//cout << result << endl;

	double arr3[5] = {1.7, 2.7, 3.1, 4.8, 5.9};
	double arr4[5];
	std::vector<double> ve;
	ve.assign (arr3, arr3 + 5);

	std::vector<double> vec = vect(ve);
	
	std::string st;
	st = "neki neki";
	//cout << stri(st) << endl;

	//Fit__predict fp;
	//vec = fp.predict(vec);
	//cout << vec[1] << endl;

	std::vector<vector<int>> a = { {3, 4}, {1, 2} };
	//cout << a[1][1] << endl;

	cout << arr(arr3, 5) << endl;

	double ary[3][2] = { 
		{ 1.1, 1.2 }, 
		{ 2.1, 2.2 }, 
		{ 3.1, 3.2 } };

	cout << "ghjk" << endl;
	cout << arr2d(*ary,3,3) << endl;

	return 0;
}