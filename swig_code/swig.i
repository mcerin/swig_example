%module no_args

%{
#define SWIG_FILE_WITH_INIT
#include "../swig3/no_args.h"
%}

%include stl.i
namespace std {
    %template(IntVector)    vector<int>;
    %template(DoubleVector) vector<double>;
}

%include "../swig3/no_args.h"