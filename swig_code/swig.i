%module swig_test

%{
#define SWIG_FILE_WITH_INIT
#include "../swig/no_args.h"
#include "../swig/fit_predict.h"
%}

%include stl.i
namespace std {
    %template(IntVector)    vector<int>;
    %template(DoubleVector) vector<double>;
}

%include "../swig/no_args.h"
%include "../swig/fit_predict.h"