//
// Created by q1591 on 2020-08-19.
// 变量定义与声明
//
#include <iostream>
using namespace std;


// 变量声明
extern int a, b;
extern int c;
extern float f;

int main()
{
    // 变量定义
    int a, b;
    int c;
    float f;

    // 变量初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    f = 30.5 / 10;
    cout << f << endl;

    return 0;
}

