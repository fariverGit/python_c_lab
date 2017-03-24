#include <stdio.h>
#include "yolo.h"

#ifdef __cplusplus
extern "C" {
#endif

//yolo net_ptr->ptr;
void* net_ptr;
//void* net_ptr = get_instance();
//
void c_wrap_get_instance()
{
    net_ptr = get_instance();
}

//extern "C" void c_wrap_init()
//void c_wrap_init(void* net_ptr)
void c_wrap_init()
{
    printf("net_init: %d\n", get(net_ptr));
    net_ptr = init(net_ptr);
    printf("net_init: %d\n", get(net_ptr));
}

//extern "C" void c_check_init()
void c_check_init()
{
    //net_ptr = get_instance();
    printf("net_init: %d\n", get(net_ptr));
}

#ifdef __cplusplus
}
#endif

//int fun()
//{
//    c_wrap_get_instance();
//    c_wrap_init();
//    c_check_init();
//    return 0;
//}
//
//void myprint()
//{
//    printf("hello world!\n");
//}
