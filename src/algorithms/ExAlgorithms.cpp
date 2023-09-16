#include "ExAlgorithms.h"
#include <iostream>
#include <algorithm>

void test_adjacent_find()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::size_type i = 0 ; i < v.size() ; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator iter;
    iter = adjacent_find(v.begin(), v.end());
    if (iter != v.end()) {
        cout << *iter << endl;
    }

    for (; iter < v.end() ; ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
}

ExAlgorithms::ExAlgorithms() 
{
}

ExAlgorithms::~ExAlgorithms() {}

void ExAlgorithms::test()
{
    test_adjacent_find();
}

