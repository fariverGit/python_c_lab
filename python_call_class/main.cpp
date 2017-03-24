#include <iostream>

#include "yolo.h"

using namespace std;

int main()
{
    yolo obj;
    obj.set(3);
    cout<<"obj.get(): "<<obj.get()<<endl;
    return 0;
}
