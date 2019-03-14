# SWIG c++ to Python (Numpy)
Examples how to wrape c++ to Python. 
In `\swig\swig\numpy_swig` is example how to wrape c++ arrays in numpy arrays.

## Wrapping cmd
Download SWIG (http://www.swig.org/download.html).
Download Python (https://www.python.org/).
Change directory to `\swig\swig_code` and than use:
```
swig -python -c++ -o _swig_module.cpp swig.i
python setup.py build_ext --inplace
python test.py
```

## Files needed:
c++ files that you want to wrape `\swig\swig\` (.cpp, .h)
swig.i
setup.py

## Files generated 
### SWIG
_swig_module.cpp
swig_test.py
### Setup
_swig_test.cp37-win32.pyd
## Other files
test.py (test if it works)
