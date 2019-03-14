import swig_test as st

print(st.no_arg() == 14)
print(st.num_arg(7) == 14)
print(st.num_argd(7.7) == 14.7)
print(st.numnum_arg(7,4) == 11)
print(st.vect([1,2,3]) == (1,2,3))
print(st.stri('Test.') == 'Test.')
print(st.loop(7) == 21)

cl = st.class_()
print(cl.func1([1.1,2.2,3.3],[2.2,3.3]) == (1.1,2.2,3.3))
print(cl.func2([1.1,2.2,3.3]) == (1.1,2.2,3.3))