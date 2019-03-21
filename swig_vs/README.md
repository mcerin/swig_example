# SWIG from Visual Studio
Examples how to wrape c++ to Python, with SWIG an Visual Studio 2017.

## Wrapping
### Files needed:
c++ files that you want to wrape (.cpp, .h)
swig.i

Download SWIG (http://www.swig.org/download.html).
Download Python (https://www.python.org/).
Download Visual Studio (https://visualstudio.microsoft.com/)

+ First in Visual Studio create new c++ `Empty Project`  (project name should be the same as %module statement in `.i` with additional `_` in front).  
+ Build the "Release" version.
In project solition add source and header files.  
Write swig interface file (`swig.i`).  
+ In CMD change direction to map that contain code (`swig_vs`).  
+ Use swig:

      swig -python -c++ -o _swig_module.cpp swig.
  it will generate two files (`_swig_module.cpp`) and (`swig_vs.py`).
+ Add generated `.cpp` file to solution source files.
+ Go in project properties and in `Configuration Properties > General` set `Target Extension` to `.pyd` and `Configuration Type` to `Dynamic Library (.dll)`.  
+ Than in `Configuration Properties > VC++ Directories` set `Include Directories` to `path to python\Python37-32\include` and `Library Directories` to `path to python\Python37-32\libs`.  
+ In `C/C++ > Comand Line` in `Additional Options` type `/wd4996 `.
+ If you use `numpy.i`, you should in `C/C++ > General` set `Additional Include Directories` to `path to python\Python37-32\Lib\site-packages\numpy\core\include`
+ Build your project.
+  Find `.pyd` file in map `Release` and `.py` in the map with swig interface file, and put them togeder in one map (`.pyd` file should have the same name as `.py` file with additional `_` in front).
+  Now you can use new module in Python.
