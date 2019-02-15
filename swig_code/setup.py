from distutils.core import setup, Extension

extension_mod = Extension("_no_args", ["_swig_module.cpp", "..\\swig3\\no_args.cpp"])

setup(name = "_no_args", ext_modules=([extension_mod]))
