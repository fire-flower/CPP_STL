#include "ExVector.h"
#include <vector>
#include <iostream>

using namespace std;

ExVector::ExVector() {}

ExVector::~ExVector() {}

void ExVector::test()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (int i = 0 ; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter = v.begin();
    iter++;
    v.insert(iter, 5, 9);

    for (int i = 0 ; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}

