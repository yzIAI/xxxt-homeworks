/*
 * [q2.cpp]
 * 信息学堂2021 课后作业 Day 4 Question 2
 * 
 * 信息学堂第四次的作业会带大家熟悉函数
 * 请根据注释里的相应提示，完成 *TODO* 部分的作业内容
 * 
 * © Tina J, 2021
 * 作者：Tina Ji
 * 时间：03/07/2021
 * 版本：1.0.0
 */

#include <iostream>
using namespace std;

// TODO
// 新建一个函数，函数名称为array_print，有一个整数parameter length，一个整数数组arr。
// 函数打印数组的全部元素并且以换行符隔开
// 写完后uncomment main函数里的测试代码，应该输出
// 1
// 2
// 3
// 4
void array_print(int length, int arr[]) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
}

int main(void) {

    int arr[4] = { 1, 2, 3, 4 };
    array_print(4, arr);
    return 0;
}