from distutils.core import setup, Extension

import numpy
numpy_include = numpy.get_include()

extension_mod = Extension("_swig_nump", ["_swig_module.cpp", "..\\..\\swig\\nump.cpp"], include_dirs = [numpy_include])

setup(name = "_swig_nump", ext_modules=([extension_mod]))
