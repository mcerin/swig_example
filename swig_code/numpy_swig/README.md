# SWIG c++ to Python (Numpy)
Example how to wrape c++ arrays to numpy arrays. 

## Wrapping cmd
Download SWIG (http://www.swig.org/download.html).
Download Python (https://www.python.org/).
Change directory to `\swig\swig_code\numpy_swig` and than use:
```
swig -python -c++ -o _swig_module.cpp swig.i
python setup.py build_ext --inplace
python test.py
```

## Files needed:
c++ files that you want to wrape `\swig\swig\` (.cpp, .h)
numpy.i (https://github.com/numpy/numpy/blob/master/tools/swig/numpy.i)
swig.i
setup.py

## Files generated 
### SWIG
_swig_module.cpp
swig_nump.py
### Setup
_swig_nump.cp37-win32.pyd
## Other files
test.py (test if it works)
fit_predict.py (python class for fit and predict)
