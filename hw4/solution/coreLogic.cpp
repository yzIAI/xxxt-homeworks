/*
 * [coreLogic.cpp]
 * 信息学堂2021 课后作业 Day 4 Challenge
 * 
 * 现在大家已经掌握了足够的知识来完成我们游戏的核心部分，让我们开始这激动人心的时刻吧！
 * © Tina J, 2021
 * 作者：Tina Ji
 * 时间：03/07/2021
 * 版本：1.0.0
 */

#include <iostream>
using namespace std;

// TODO
// 写两个函数
// 第一个函数叫init 将board的所有元素初始化为_
// 第二个函数叫gameover，判断是否有玩家胜利，如果有玩家胜利，返回2，如果棋盘满了，返回1，如果没有人胜利，返回0
// uncomment main函数里的代码进行测试。
char board[3][3];

void init() {
	for(int i = 0 ; i < 3 ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			board[i][j] = '_';
		}
	}
}

int gameover() {
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != '_') return 2;
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '_') return 2;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '_')
        return 2;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '_')
        return 2;
	for (int i = 0; i <= 2; i++)
		for (int j = 0; j <= 2; j++)
			if (board[i][j] == '_')
				return 0;
	return 1;
}

int main(void) {
    // init();
    // assert(gameover() == 0);
    // board[0][0] = board[0][1] = board[0][2] = 'X';
    // assert(gameover() == 2);
    // board[0][0] = board[1][0] = board[2][0] = 'X';
    // assert(gameover() == 2);
    // board[0][0] = board[1][1] = board[2][2] = 'X';
    // assert(gameover() == 2);
    // board[0][0] = board[0][1] = board[1][2] = board[2][0] = board[2][2] ='X';
    // board[0][2] = board[1][0] = board[1][1] = board[2][1] = 'O';
    // assert(gameover() == 1);
    return 0;
}