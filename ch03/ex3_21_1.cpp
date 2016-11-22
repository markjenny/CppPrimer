/*************************************************************************
	> File Name: ex3_21_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年11月23日 星期三 00时34分40秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    cout << "the elements of v1 :" << endl;
    vector<int> v1;
    for (auto iter = v1.cbegin();
        iter != v1.cend(); iter++)
        cout << *iter << endl;

    cout << "the elements of v2 : " << endl;
    vector<int> v2(10);
    for (auto iter = v2.cbegin();
        iter != v2.cend(); iter++)
        cout << *iter << endl;

    cout << "the elements of v3 : " << endl;
    vector<int> v3(10, 42);
    for (auto iter = v3.cbegin();
        iter != v3.cend(); iter++)
        cout << *iter << endl;

    cout << "the elements of v4 : " << endl;
    vector<int> v4{10};
    for (auto iter = v4.cbegin();
        iter != v4.cend(); iter++)
        cout << *iter << endl;

    cout << "the elements of v5 : " << endl;
    vector<int> v5{10, 42};
    for (auto iter = v5.cbegin();
        iter != v5.cend(); iter++)
        cout << *iter << endl;

    cout << "the elements of v6 : " << endl;
    vector<string> v6{10};
    for (auto iter = v6.cbegin();
        iter != v6.cend(); iter++)
        cout << *iter << endl;

    cout << "the elements of v7 : " << endl;
    vector<string> v7{10, "null"};
    for (auto iter = v7.cbegin();
        iter != v7.cend(); iter++)
        cout << *iter << endl;

    return 0;
}
