#include <stdio.h>
#include "ExFuncObj.h"
#include "ExTemplate.h"
#include "ExVector.h"

void test()
{
#if 0
    ExFuncObj ex;
#elif 0
    ExTemplate ex;
#elif 1
    ExVector ex;
#endif
    ex.test();
}

int main(int argc, char *args[])
{
    test();
    return 0;
}