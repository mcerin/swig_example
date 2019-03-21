import numpy as np
import swig_vs as sv

print(sv.no_arg() == 14)
print(sv.num_arg(7) == 14)
print(sv.num_argd(7.7) == 14.7)
print(sv.numnum_arg(7,4) == 11)
print(sv.vect([1,2,3]) == (1,2,3))
print(sv.stri('Test.') == 'Test.')
print(sv.loop(7) == 21)

cl = sv.class_()
print(cl.func1([1.1,2.2,3.3],[2.2,3.3]) == (1.1,2.2,3.3))
print(cl.func2([1.1,2.2,3.3]) == (1.1,2.2,3.3))

a=[[1,2],[1.1,2.2]]
ar = np.array(a)
print( sv.arr(a[0]) == 1)
print( sv.arr2d(ar) == 1)
print( sv.two_arr(ar[0], ar[1]) == 2.1)

li = sv.return_array(10,7)
print( (li == np.array([7,8,9,10,11,12,13,14,15,16])).all() )

pr = sv.predict(ar[1],3)
print( (pr == np.array([5,4,3])).all() )

#TREE
tree = sv.Fit_predict()
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
