cmake_minimum_required(VERSION 3.0)


project(mytest)

INCLUDE_DIRECTORIES(inc)
INCLUDE_DIRECTORIES(inc/sequence)
INCLUDE_DIRECTORIES(inc/associative)
INCLUDE_DIRECTORIES(inc/algorithms)
INCLUDE_DIRECTORIES(inc/iterator)
INCLUDE_DIRECTORIES(inc/util)


set (SRC 
    src/mytest.cpp
    src/util/MyConsole.cpp
    src/ExFuncObj.cpp
    src/ExTemplate.cpp
    src/ExPoint.cpp
    src/sequence/ExVector.cpp
    src/associative/ExMap.cpp
    src/algorithms/ExAlgorithms.cpp
    src/iterator/ExIterator.cpp
)

add_executable(${PROJECT_NAME} ${SRC})