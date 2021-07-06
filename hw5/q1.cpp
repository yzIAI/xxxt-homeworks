/*
 * [q1.cpp]
 * 信息学堂2021 课后作业 Day 5 Question 1
 * 
 * 信息学堂第五次的作业会带大家熟悉递归和一些简单的STL的库
 * 请根据注释里的相应提示，完成 *TODO* 部分的作业内容
 * 
 * © Tina J, 2021
 * 作者：Tina Ji
 * 时间：04/07/2021
 * 版本：1.0.0
 */

#include <iostream>
#include <assert.h>
using namespace std;

// TODO
// 我们使用递归实现一个函数，输入一个非负整数，返回组成它的数字之和
// Step1: 考虑递归终止的情况，在数字小于10的时候，我们停止递归
// Step2: 递归，我们应该返回当前这位的数字加上剩下部分的和

int digitSum(int n) {

    return -1;
}

int main(void) {

    assert(digitSum(1) == 1);
    assert(digitSum(11) == 2);
    assert(digitSum(121) == 4);
    assert(digitSum(3331) == 10);
    return 0;
}