#pragma once
/*
class Fit_predict {
public:
	double fit(double* seq1, int n, int m, double* seq2, int l);
};*/

double arr(double* seq, int n);
double arr2d(double* seq, int n, int m);
void return_array(double *arr, int size, int k);
double two_arr(double* seq1, int n, double* seq2, int m);
void predict(double *inarr, int size, double *outarr, int size2);

class Fit_predict {
public:
	void _partial_fit(double* input_array, int num_of_samples, int num_of_features, double *input_class, int num_of_samples2);
	void _predict(double* input_array, int num_of_samples, int num_of_features, double *prediction, int size);
};
