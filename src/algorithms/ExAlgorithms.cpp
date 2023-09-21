#include "ExAlgorithms.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "MyConsole.h"

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

void test_count_unique()
{
    srand(static_cast<unsigned int>(time(0)));

    vector<int> v;
    for (int i = 0 ; i < 10 ; ++i) {
        v.push_back(rand() % 10);
    }

    // count
    for (vector<int>::size_type i = 0 ; i < v.size() ; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    // unique
    vector<int> vSort(v);
    sort(vSort.begin(), vSort.end());

    vSort.erase(unique(vSort.begin(), vSort.end()), vSort.end());
    for (const auto& value : vSort) cout << value << ' ';
    cout << endl;
}

ExAlgorithms::ExAlgorithms() 
{
}

ExAlgorithms::~ExAlgorithms() {}

void ExAlgorithms::test()
{
    PrintConsole("-- test_adjacent_find", ForeColour::Green); 
    test_adjacent_find();

    PrintConsole("-- test_count_unique", ForeColour::Green);
    test_count_unique();
}

