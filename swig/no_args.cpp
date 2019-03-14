#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include "no_args.h"

int no_arg()
{
	int a, b;
	int result;
	a = 7;
	b = 7;
	result = a + b;
	return result;
}

int num_arg(int a) {
	int b;
	int result;
	b = 7;
	result = a + b;
	return result;
}

double num_argd(double a) {
	int b;
	double result;
	b = 7;
	result = a + b;
	return result;
}

int numnum_arg(int a, int b) {
	int result;
	result = a + b;
	return result;
}

std::vector<double> vect(std::vector<double> ve) {
	return ve;
}

std::string stri(std::string st) {
	return st;
}

int loop(int x) {
	int ret = 0;
	for (int i = 0; i < x; i++) {
		ret = ret + i;
	}
	return ret;
}