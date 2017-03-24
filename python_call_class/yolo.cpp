#include <iostream>

#include "yolo.h"

using namespace std;


class yolo
{
public:
    //yolo(){net_init = 0;}
    yolo():net_init(0){}
    void init(){net_init += 10;}
    int get() {return net_init;}

private:
    int net_init;
};

//******wrap c++ class with c inference*******//
//any c++ keyword can't appear in .h file,
//so convert I/O of function with C keyword.
void* get_instance() {
    //yolo a;
    //cout<<"a.get(): "<<a.get()<<endl;
    //initailize variable by new,
    //it will keep instance memory in other function.
    yolo *ins = new yolo();
    return (void*) ins;
    //return (void*) &a;
}

void* init(void* ins) {
    yolo *loc_ins = (yolo*) ins;
    loc_ins->init();
    return (void*)loc_ins;
}

int get(void* ins)
{
    yolo *loc_ins = (yolo*)ins;
    return loc_ins->get();
}
