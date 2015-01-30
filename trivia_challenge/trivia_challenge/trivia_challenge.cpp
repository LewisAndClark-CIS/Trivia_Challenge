// trivia_challenge.cpp
// Jason Nguyen
// 1/30/15

#include "stdafx.h"
#include <iostream>
#include <string> 
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string trivia_board[5] = { "", "", "", "", "" };
	string questions[2][5] = {
	{ "Question 1: ", "Question 2: ", "Question 3: ", "Question 4: ", "Question 5: " },
	{ "Answer", "Answer", "Answer", "Answer", "Answer" },
};
	char player1;
	int player1_position = 0;
	char player2;
	int player2_position = 0;
	bool done = 1;

	cout << "Welcome to Jason's Trivia Game!!! Homie" << endl;
	cout << "Pick ONE character for your board piece!" << endl;
	cout << "Player 1: ";
	cin >> player1;
	cout << "Player 2: ";
	cin >> player2;

	trivia_board[player1_position] = player1;
	trivia_board[player2_position] += player2;

	while (done != 0){
		string player1_answer;
		string player2_answer;
		system("CLS");

		for (int i = 0; i < 5; i++){
			cout << "[" << trivia_board[i] << "]";
		}

		cout << endl;

		if (player1_position == 4 | player2_position == 4){
			done = 0;
		}
		else{
			cout << endl <<  "Player 1's turn. Your question: " << endl;
			cout << questions[0][player1_position];
			cin >> player1_answer;
			if (player1_answer == questions[1][player1_position]){
				player1_position += 1;
				cout << "Correct! You are now on space " << player1_position + 1 << endl << endl;
			}
			else{
				cout << "YOU'RE WRONG STILL ON THE SAME SPACE HOMIE U RONG DUDE" << endl;
			}

			cout << endl << endl << "Player 2's turn. Your question: " << endl;
			cout << questions[0][player2_position];
			cin >> player2_answer;
			if (player2_answer == questions[1][player2_position]){
				player2_position += 1;
				cout << "Correct! You are now on space " << player2_position + 1 << endl << endl;
			}
			else{
				cout << "YOU'RE WRONG STILL ON THE SAME SPACE HOMIE U RONG DUDE" << endl;
			}
			cin.ignore();
			cin.ignore();
		}

		for (int i = 0; i < 5; i++){
			trivia_board[i] = "";
			if (player1_position == i){
				trivia_board[i] += player1;
			}
			if (player2_position == i){
				trivia_board[i] += player2;
			}


		}
	}
	system("CLS");
	cout << "end game gj m8" << endl;
	// congrats which players win... both players are able to win.
	if (player1_position == 4){
		cout << "Congrats player 1 you win" << endl;
	}
	if (player2_position == 4){
		cout << "Congrats player 2 you win";;
	}
	cin.ignore();
	cin.ignore();

	return 0;
}

