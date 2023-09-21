#include "ExIterator.h"
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

ExIterator::ExIterator() {}

ExIterator::~ExIterator() {}

void ExIterator::test()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);

    vector<int> v2;
    /* insert_iterator<vector<int> > insert(v2, v2.begin());
    copy(v1.begin(), v1.end(), insert); */
    copy(v1.begin(), v1.end(), insert_iterator<vector<int>>(v2, v2.begin()));

    cout << "v1 : ";
    for (vector<int>::iterator iter = v1.begin() ; iter < v1.end(); ++iter)
        cout << *iter << " ";
    cout << endl;
}

