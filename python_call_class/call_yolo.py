import ctypes

so = ctypes.CDLL("./yolo_wrap.so")

#so.get_instance()
#so.fun()
#so.myprint()
so.c_wrap_get_instance()
so.c_wrap_init()
so.c_check_init()
