#include "ExMap.h"
#include <map>
#include <iostream>

using namespace std;

void test_1()
{
    map<int, int> m;
    pair<map<int, int>::iterator, bool> pr;

    m.insert(pair<int, int>(5,100));
    m.insert(pair<int, int>(3,100));
    m.insert(pair<int, int>(8,30));
    m.insert(pair<int, int>(4,40));
    m.insert(pair<int, int>(1,70));
    m.insert(pair<int, int>(7,100));

    pr = m.insert(pair<int, int>(9,50));
    if (true == pr.second) {
        cout << "key: " << pr.first->first << ", value: " << pr.first->second << " 저장완료!" << endl;
    } else {
        cout << "key 9가 이미 m에 있습니다." << endl;
    }

    pr = m.insert(pair<int, int>(9,50));
    if (true == pr.second) {
        cout << "key: " << pr.first->first << ", value: " << pr.first->second << " 저장완료!" << endl;
    } else {
        cout << "key 9가 이미 m에 있습니다." << endl;
    }
}

struct  Person
{
    string name;
    int age;
    short sex;
    Person(string _name, int _age, short _sex) : name(_name), age(_age), sex(_sex) {}
    void print()
    {
        cout << " 이름: " << name << ",  나이: " << age << ",  성별: " << ((sex == 0) ? "남자" : "여자") << endl;
    }
};


void test_2()
{
    Person p1("최형묵", 51, 0);
    Person p2("김정덕", 51, 1);
    Person p3("최재웅", 8, 0);
    Person p4("최재웅", 9, 0);

    multimap<int, Person> mm;
    mm.insert(pair<int, Person>(1, p1));
    mm.insert(pair<int, Person>(2, p2));
    mm.insert(pair<int, Person>(3, p3));
    mm.insert(pair<int, Person>(3, p4));

    pair<multimap<int, Person>::iterator, multimap<int, Person>::iterator> iter_pair;
    iter_pair = mm.equal_range(3);
    multimap<int, Person>::iterator iter;
    for (iter = iter_pair.first ; iter != iter_pair.second ; ++iter) {
        iter->second.print();
    }
}

ExMap::ExMap() {}

ExMap::~ExMap() {}

void ExMap::test()
{
    //test_1();
    test_2();
}

