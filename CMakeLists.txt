cmake_minimum_required(VERSION 3.0)


project(mytest)

INCLUDE_DIRECTORIES(inc)
INCLUDE_DIRECTORIES(inc/sequence)


set (SRC 
    src/mytest.cpp
    src/ExFuncObj.cpp
    src/ExTemplate.cpp
    src/ExPoint.cpp
    src/sequence/ExVector.cpp
)

add_executable(${PROJECT_NAME} ${SRC})