#include <stdio.h>
#include "ExFuncObj.h"
#include "ExTemplate.h"
#include "ExVector.h"
#include "ExMap.h"
#include "ExAlgorithms.h"

void test()
{
#if 0
    ExFuncObj ex;
#elif 0
    ExTemplate ex;
#elif 0
    ExVector ex;
#elif 0
    ExMap ex;
#elif 1
    ExAlgorithms ex;
#endif
    ex.test();
}

int main(int argc, char *args[])
{
    test();
    return 0;
}