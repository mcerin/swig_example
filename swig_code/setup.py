from distutils.core import setup, Extension

extension_mod = Extension("_swig_test", ["_swig_module.cpp", "..\\swig\\no_args.cpp", "..\\swig\\fit_predict.cpp"])

setup(name = "_swig_test", ext_modules=([extension_mod]))
