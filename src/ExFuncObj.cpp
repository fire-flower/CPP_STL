#include "ExFuncObj.h"
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sys/time.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

template<typename T>
inline const char* getTypeName() {
  return typeid(T).name();
}

#define DEFINE_TYPE_NAME(type, type_name)  \
  template<>                                \
  inline const char* getTypeName<type>() {  \
    return type_name;                      \
  }

//DEFINE_TYPE_NAME(print, "print");

#if 0
void print(int a)
{
    printf("%d\n", a);
}
#endif

struct print {
    void operator()(int a) const {
        printf("%d\n",a);
    }
};

struct accum {
    int sum;
    accum() { sum = 0; }
    void operator()(int a) {
      sum += a;
  }

};

DEFINE_TYPE_NAME(print, "print");
DEFINE_TYPE_NAME(ExFuncObj, "ExFuncObj");

ExFuncObj::ExFuncObj() {}

ExFuncObj::~ExFuncObj() {}

void ExFuncObj::test()
{
    //printf("%s::%s\n", typeid(*this).name(),__FUNCTION__);
    printf("%s::%s\t", getTypeName<ExFuncObj>(),__FUNCTION__);
    
    struct timeval startTime, endTime, gapTime;


#if 1
    int arr[] = {2,8,5,1,9};
    vector<int> v(&arr[0], &arr[5]);

    sort(v.begin(), v.end());
    gettimeofday(&startTime, NULL);
    sleep(1);
    gettimeofday(&endTime, NULL);
    gapTime.tv_sec = endTime.tv_sec - startTime.tv_sec;
    gapTime.tv_usec = endTime.tv_usec - startTime.tv_usec;
    if ( gapTime.tv_usec < 0 )
    {
        gapTime.tv_sec = gapTime.tv_sec - 1;
        gapTime.tv_usec = gapTime.tv_usec + 1000000;
    }
    printf("ellapsed time [%02d.%02d] second\n", gapTime.tv_sec, gapTime.tv_usec);

    for_each(v.begin(), v.end(), print()); // print 클래스의 임시 객체 생성
#endif

#if 0
    int arr[] = {2,8,5,1,9};
    vector<int> v(&arr[0], &arr[5]);

    sort(v.begin(), v.end());
    accum f;
    f = for_each(v.begin(), v.end(), f);
    printf("총합 = %d\n", f.sum);
#endif

}