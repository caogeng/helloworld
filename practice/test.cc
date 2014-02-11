/*
 * =====================================================================================
 *
 *       Filename:  RemoveComments.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013/10/18 10:47:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  yang_bao_xing@163.com
 *   Organization:  ict
 *
 * =====================================================================================
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

struct T {
    char a1;
    int a2;
    float a3;
};
int main(int argc, char* argv[]) {
   
    int a, &ra = a, &*refp = &ra;

    cout << sizeof(T) << endl;

    float a = 1.0f;
    int &b = (int&)a;
    cout << (int&)a << endl;
    cout << b << endl;

    cout << boolalpha << ((int)a == (int&)a) << endl;
    
    float aa = 0.0f;
    int &bb = (int&)aa;
    cout << (int&)aa << endl;
    cout << bb << endl;
    cout << boolalpha << ((int)aa == (int&)aa) << endl;
    
    return 0;
}



