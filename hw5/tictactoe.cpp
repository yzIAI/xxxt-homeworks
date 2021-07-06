/*
 * [tictactoe.cpp]
 * 信息学堂2021 课后作业 Challenge
 * 
 * 这是关于井字棋的最后一次作业
 * 
 * © Tina J, 2021
 * 作者：Tina Ji
 * 时间：06/07/2021
 * 版本：1.0.0
 */

#include <cstdlib>
#include <limits>
#include <iostream>
#include <string>

using namespace std;

char board[3][3];
char player = 'X';
string errMsg ("");

bool isAvailable(int row, int column) {
	return board[row - 1][column - 1] == '_';
}

void init() {
	for(int i = 0 ; i < 3 ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			board[i][j] = '_';
		}
	}
}

void clearScreen() {
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

bool validate(int number) {
	if(number >= 1 && number <= 3) {
		return true;
	} else {
		errMsg.assign("Please pick a value between 1 and 3\n");
		return false;
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

bool isValidInput(istream& in) {
	if(in.fail()) {
		errMsg.assign("Only numbers are accepted\n");
	    in.clear();
	    in.ignore(numeric_limits<streamsize>::max(), '\n'); //skip bad input
	    return false;
	}
	return true;
}

void printBoard() {

	cout << "It's " << player << "'s turn" << endl;
	//printing column numbers
	cout << "\t";

	for(int i = 0 ; i < 3 ; i++) {
		cout << i + 1 << "\t";
	}
	cout << endl;

	for(int i = 0 ; i < 3 ; i++) {
		cout << i + 1 << "\t";
		for(int j = 0 ; j < 3 ; j++) {
			cout << board[i][j] << "\t";
		}
		cout << endl;
	}
}

// TODO
// 我们现在要完成这个完整的游戏循环部分
// 当游戏还没有结束，我们一直进行循环
// 在循环里我们需要读取用户输入的行和列
// 根据当前玩家更新棋盘
// 所有需要的辅助函数都已经给出
// 注意：玩家可能会给出不合理的输入 可以用 isValidInput(cin) 和 validate()进行检查
void gameLoop() {
	while(/* condition */) {
		

		clearScreen();

	}
    // print game status（who won or no winner）
}

int main() {
	int choice;
	while (1) {
		printf("********************\n* Game Tic-Tac-Toe *\n* 1. New Game      *\n* 2. Help\n* 3. Quit          *\n********************\n");
		scanf("%d", &choice);
		if (choice == 1) {
			init();
			gameLoop();
			break;
		} else if (choice == 2) {
			printf("1. The game is played on a grid that's 3 squares by 3 squares.\n2. You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.\n3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n");
		} else if (choice == 3) {
			break;
		}
	}
	return 0;
}