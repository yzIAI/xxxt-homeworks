/*
 * [q2.cpp]
 * 信息学堂2021 课后作业 Day 2 Question 2
 * 
 * 信息学堂第二次的作业会带大家熟悉表达式，分支与简单循环
 * 请根据注释里的相应提示，完成 *TODO* 部分的作业内容
 * 
 * © Tina J, 2021
 * 作者：Tina Ji
 * 时间：27/06/2021
 * 版本：1.0.0
 */

#include <iostream>
using namespace std;

int main(void) {
    int m;
    cin >> m;
    if (m < 0) {
        cout << "Invalid marks.\n";
    } else if (m < 50) {
        cout << "Fail\n";
    } else if (m < 65) {
        cout << "Pass\n";
    } else if (m < 75) {
        cout << "Credit\n";
    } else if (m < 85) {
        cout << "Distinction\n";
    } else if (m <= 100) {
        cout << "High Distinction\n";
    } else {
        cout << "Invalid marks.\n";
    }
    return 0;
}