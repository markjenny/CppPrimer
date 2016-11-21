/*************************************************************************
	> File Name: ex3_16_1.cpp
	> Author: Mark
	> Mail: lijianlin0819@163.com
	> Created Time: 2016年11月20日 星期日 16时26分25秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "null"};

    //this method don't use the special for-expression of C++11
    //eg:for(auto i : v1)
    decltype(v1.size()) v1_len = v1.size();
    cout << "the length is: " << v1_len << endl;
    for (decltype(v1.size()) i = 0; i < v1.size(); i++)
    {
        cout << "number [" << i << "] is: " << v1[i] << endl;
    }

     decltype(v2.size()) v2_len = v2.size();
    cout << "the length is: " << v2_len << endl;
    for (decltype(v2.size()) i = 0; i < v2.size(); i++)
    {
        cout << "number [" << i << "] is: " << v2[i] << endl;
    }
    
    decltype(v3.size()) v3_len = v3.size();
    cout << "the length is: " << v3_len << endl;
    for (decltype(v3.size()) i = 0; i < v3.size(); i++)
    {
        cout << "number [" << i << "] is: " << v3[i] << endl;
    }
    
    decltype(v4.size()) v4_len = v4.size();
    cout << "the length is: " << v4_len << endl;
    for (decltype(v4.size()) i = 0; i < v4.size(); i++)
    {
        cout << "number [" << i << "] is: " << v4[i] << endl;
    }

    decltype(v5.size()) v5_len = v5.size();
    cout << "the length is: " << v5_len << endl;
    for (decltype(v5.size()) i = 0; i < v5.size(); i++)
    {
        cout << "number [" << i << "] is: " << v5[i] << endl;
    }
    
    decltype(v6.size()) v6_len = v6.size();
    cout << "the length is: " << v6_len << endl;
    for (decltype(v6.size()) i = 0; i < v6.size(); i++)
    {
        cout << "number [" << i << "] is: " << v6[i] << endl;
    }

    decltype(v7.size()) v7_len = v7.size();
    cout << "the length is: " << v7_len << endl;
    for (decltype(v7.size()) i = 0; i < v7.size(); i++)
    {
        cout << "number [" << i << "] is: " << v7[i] << endl;
    }


    return 0;
}
