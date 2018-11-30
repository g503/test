#include <show.h>
#include <swap.h>

int main()
{
int a = 10;
int b = 20;

    show(a, b);
    swap(&a, &b);
    show(a, b);

    return 0;
}
/*
gs@gs:~/workspace/test/build$ cmake ..
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/gs/workspace/test/build
gs@gs:~/workspace/test/build$ make
Scanning dependencies of target Project_libs
[ 50%] Building C object CMakeFiles/Project_libs.dir/src/main.c.o
/home/gs/workspace/test/src/main.c: In function ‘main’:
/home/gs/workspace/test/src/main.c:9:5: warning: implicit declaration of function ‘show’ [-Wimplicit-function-declaration]
     show(a, b);
     ^
/home/gs/workspace/test/src/main.c:10:5: warning: implicit declaration of function ‘swap’ [-Wimplicit-function-declaration]
     swap(&a, &b);
     ^
[100%] Linking C executable ../bin/Project_libs
[100%] Built target Project_libs
gs@gs:~/workspace/test/build$ 
*/
