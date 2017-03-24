import ctypes
import numpy as np

so = ctypes.CDLL('./sum.so')

#print "so.sum(50) = %d" % so.sum(50)
#so.display("hello world!")
#print "so.add() = %d" % so.add(ctypes.c_float(2), ctypes.c_float(2010))
pyarray = [1,2,3,4,5,6,7,8]
#pyarray = [[1,2,3,4], [5,6,7,8]]
#pyarray = [[[1,2,3,4], [5,6,7,8]]]
carray = (ctypes.c_int*len(pyarray))(*pyarray)
#carray = (ctypes.c_int*4*2)(*(tuple(tuple(j) for j in i) for i in pyarray))
#print "so.sum_array() = %d" % so.sum_array(carray, len(pyarray))
so.modify_array(carray, len(pyarray))
#print pyarray
print np.array(carray)


