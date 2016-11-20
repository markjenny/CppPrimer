/*************************************************************************
	> File Name: ex3_14_1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年11月20日 星期日 10时54分01秒
 ************************************************************************/

#include<iostream>
#include<vector>

using std::cin;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> vec;
    int num = 0;
    while (cin >> num)
        vec.push_back(num);
    
    vector<int>::iterator iter = vec.begin();
    for(; iter != vec.end(); iter++)
        cout << *iter << endl;

    return 0;
}
