/*
 * [printMenu.cpp]
 * 信息学堂2021 课后作业 Day 2 Challenge
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

// TODO
// 在给出的代码的基础上，进行以下操作
// 判断用户的选择
// 如果为1 输出 New Game started 并退出程序
// 如果为2 首先输出 1. The game is played on a grid that's 3 squares by 3 squares.\n2. You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.\n3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n
//        然后重新打印菜单 读取用户输入（换句话说，用户可以无限输入2）
// 如果为3 退出程序

int main(void) {
    int choice;
    cout << "********************\n* Game Tic-Tac-Toe *\n* 1. New Game      *\n* 2. Help\n* 3. Quit          *\n********************\n";
    cin >> choice;
    return 0;
}