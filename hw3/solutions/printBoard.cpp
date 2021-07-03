/*
 * [printBoard.cpp]
 * 信息学堂2021 课后作业 Day 3 Challenge
 * 
 * 信息学堂第二次的作业会带大家熟悉表达式，分支与简单循环
 * 请根据注释里的相应提示，完成 *TODO* 部分的作业内容
 * 
 * © Tina J, 2021
 * 作者：Tina Ji
 * 时间：03/07/2021
 * 版本：1.0.0
 */

#include <iostream>
using namespace std;

int main(void) {
    char board[3][3];
    char player = 'X';
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        board[i][j] = '_';
      }
    }
    cout << "  1 2 3\n";
    for (int i = 0; i < 3; i++) {
      cout << i + 1 << " ";
      for (int j = 0; j < 3; j++) {
        cout << board[i][j] << " ";
      }
      cout << "\n";
    }
    return 0;
}