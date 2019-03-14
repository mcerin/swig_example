import numpy as np
import swig_nump as sn

a=[[1,2],[1.1,2.2]]
ar = np.array(a)
print( sn.arr(a[0]) == 1)
print( sn.arr2d(ar) == 1)
print( sn.two_arr(ar[0], ar[1]) == 2.1)

li = sn.return_array(10,7)
print( (li == np.array([7,8,9,10,11,12,13,14,15,16])).all() )

pr = sn.predict(ar[1],3)
print( (pr == np.array([5,4,3])).all() )

#TREE
tree = sn.Fit_predict()
tree._partial_fit(ar, ar[0])
prediction = tree._predict(ar, 2)
print((prediction == np.array([1,2])).all())

####################
# Test python class.
import fit_predict as fp

tree = fp.HoeffdingTree()
tree.partial_fit(ar, ar[0])
prediction = tree.predict(ar)
print((prediction == np.array([1,2])).all())
