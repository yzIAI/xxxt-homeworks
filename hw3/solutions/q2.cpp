/*
 * [q2.cpp]
 * 信息学堂2021 课后作业 Day 3 Question 2
 * 
 * 信息学堂第三次的作业会带大家熟悉数组以及循环在数组的应用
 * 请根据注释里的相应提示，完成 *TODO* 部分的作业内容
 * 
 * © Tina J, 2021
 * 作者：Tina Ji & Ziang Qiao
 * 时间：03/07/2021
 * 版本：1.0.0
 */

#include <iostream>
using namespace std;

int main(void) {

    int i = 0, row = 10, col = 10, scalar = 3;
    int matrix[row][col];
    for (int j = 0; j < row; j++) {
      for (int k = 0; k < col; k++) {
        matrix[j][k] = 1;
      }
    }
    for (int j = 0; j < row; j++) {
      for (int k = 0; k < col; k++) {
        matrix[j][k] *= scalar;
      }
    }
    return 0;
}