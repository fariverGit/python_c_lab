##compile yolo_wrap.so
g++ -Wall -fPIC -c yolo.cpp
g++ -Wall -fPIC -c c_wrap.c
g++ yolo.o c_wrap.o -shared -o yolo_wrap.so

##compile yolo.so and main
#g++ -Wall -fPIC -c yolo.cpp
#g++ yolo.o -shared -o yolo.so
#gcc c_wrap.c yolo.so main

