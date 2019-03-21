//#include "pch.h"
#include <iostream>
#include "nump.h"

double arr(double* seq, int n)
{
	return seq[0];
}

double arr2d(double* seq, int n, int m)
{
	return seq[0];
}

double two_arr(double* seq1, int n, double* seq2, int m)
{
	return seq1[0] + seq2[0];
}

void return_array(double *arr, int size , int k) {
	for (int i = 0; i < size; i++)
		arr[i] = i + k;
}

void predict(double *inarr, int size, double *outarr, int size2) {
	outarr[0] = 5.0;
	outarr[1] = 4.0;
	outarr[2] = 3.0;
}

//fit and predict
void Fit_predict::_partial_fit(double* input_array, int num_of_samples, int num_of_features, double* input_class, int num_of_samples2) {
	std::cout << "fit" << std::endl;
}

void Fit_predict::_predict(double* input_array, int num_of_samples, int num_of_features, double *prediction, int size) {
	std::cout << "predict" << std::endl;
}
