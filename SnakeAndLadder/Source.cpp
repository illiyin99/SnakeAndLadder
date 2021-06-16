#include<iostream>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
using namespace std;
int count_moves = 0;
string  winner;
void Board()
{
	int i, j;
	int a[10][10] = { {1,2,3,4,5,6,7,8,9,10},
					 {20,19,18,17,16,15,14,13,12,11},
					 {21,22,23,24,25,26,27,28,29,30},
					 {40,39,38,37,36,35,34,33,32,31},
					 {41,42,43,44,45,46,47,48,49,50},
					 {60,59,58,57,56,55,54,53,52,51},
					 {61,62,63,64,65,66,67,68,69,70},
					 {80,79,78,77,76,75,74,73,72,71},
					 {81,82,83,84,85,86,87,88,89,90},
					 {100,99,98,97,96,95,94,93,92,91} };
	cout << "board is : " << endl;
	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j < 10; j++)
		{

			cout << "\t";
			cout << a[i][j] << " ";


		}
		cout << endl;
	}
	system("pause");
	system("CLS");

}
void Board1(int scoreofplayer)
{
	int i, j;
	int a[10][10] = { {1,2,3,4,5,6,7,8,9,10},
					 {20,19,18,17,16,15,14,13,12,11},
					 {21,22,23,24,25,26,27,28,29,30},
					 {40,39,38,37,36,35,34,33,32,31},
					 {41,42,43,44,45,46,47,48,49,50},
					 {60,59,58,57,56,55,54,53,52,51},
					 {61,62,63,64,65,66,67,68,69,70},
					 {80,79,78,77,76,75,74,73,72,71},
					 {81,82,83,84,85,86,87,88,89,90},
					 {100,99,98,97,96,95,94,93,92,91} };
	cout << "board is : " << endl;
	for (i = 9; i >= 0; i--)
	{
		for (j = 9; j >= 0; j--)
		{
			if (a[i][j] == scoreofplayer)
			{
				cout << "\t";
				cout << a[i][j] << " /p1" << " ";
			}
			else
			{
				cout << "\t";
				cout << a[i][j] << " ";
			}


		}
		cout << endl;
	}
}
void Board2(int scoreofplayer)
{
	int i, j;
	int a[10][10] = { {1,2,3,4,5,6,7,8,9,10},
					 {20,19,18,17,16,15,14,13,12,11},
					 {21,22,23,24,25,26,27,28,29,30},
					 {40,39,38,37,36,35,34,33,32,31},
					 {41,42,43,44,45,46,47,48,49,50},
					 {60,59,58,57,56,55,54,53,52,51},
					 {61,62,63,64,65,66,67,68,69,70},
					 {80,79,78,77,76,75,74,73,72,71},
					 {81,82,83,84,85,86,87,88,89,90},
					 {100,99,98,97,96,95,94,93,92,91} };
	cout << "board is : " << endl;
	for (i = 9; i >= 0; i--)
	{
		for (j = 9; j >= 0; j--)
		{
			if (a[i][j] == scoreofplayer)
			{
				cout << "\t";
				cout << a[i][j] << " /p2" << " ";
			}
			else
			{
				cout << "\t";
				cout << a[i][j] << " ";
			}


		}
		cout << endl;
	}
}
void Board3(int scoreofplayer)
{
	int i, j;
	int a[10][10] = { {1,2,3,4,5,6,7,8,9,10},
					 {20,19,18,17,16,15,14,13,12,11},
					 {21,22,23,24,25,26,27,28,29,30},
					 {40,39,38,37,36,35,34,33,32,31},
					 {41,42,43,44,45,46,47,48,49,50},
					 {60,59,58,57,56,55,54,53,52,51},
					 {61,62,63,64,65,66,67,68,69,70},
					 {80,79,78,77,76,75,74,73,72,71},
					 {81,82,83,84,85,86,87,88,89,90},
					 {100,99,98,97,96,95,94,93,92,91} };
	cout << "board is : " << endl;
	for (i = 9; i >= 0; i--)
	{
		for (j = 9; j >= 0; j--)
		{
			if (a[i][j] == scoreofplayer)
			{
				cout << "\t";
				cout << a[i][j] << " /p3" << " ";
			}
			else
			{
				cout << "\t";
				cout << a[i][j] << " ";
			}


		}
		cout << endl;
	}
}
void Board4(int scoreofplayer)
{
	int i, j;
	int a[10][10] = { {1,2,3,4,5,6,7,8,9,10},
					 {20,19,18,17,16,15,14,13,12,11},
					 {21,22,23,24,25,26,27,28,29,30},
					 {40,39,38,37,36,35,34,33,32,31},
					 {41,42,43,44,45,46,47,48,49,50},
					 {60,59,58,57,56,55,54,53,52,51},
					 {61,62,63,64,65,66,67,68,69,70},
					 {80,79,78,77,76,75,74,73,72,71},
					 {81,82,83,84,85,86,87,88,89,90},
					 {100,99,98,97,96,95,94,93,92,91} };
	cout << "board is : " << endl;
	for (i = 9; i >= 0; i--)
	{
		for (j = 9; j >= 0; j--)
		{
			if (a[i][j] == scoreofplayer)
			{
				cout << "\t";
				cout << a[i][j] << " /p4" << " ";
			}
			else
			{
				cout << "\t";
				cout << a[i][j] << " ";
			}


		}
		cout << endl;
	}
}
void welcome()
{
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "****************************************" << endl;
	cout << endl;
	cout << "          Snakes and Ladders" << endl;
	cout << "          ''''''''''''''''''" << endl << endl;
	cout << "****************************************" << endl;
	system("pause");
	system("CLS");
}


void Name(string& player1, string& player2, string& player3, string& player4)
{
	cout << "Enter the name of the 1st player:	";
	cin >> player1;
	cout << "\nEnter the name of the 2nd player:	";
	cin >> player2;
	cout << "\nEnter the name of the 3rd player:	";
	cin >> player3;
	cout << "\nEnter the name of the 4th player:	";
	cin >> player4;
	cout << endl;
	system("pause");
	system("CLS");
}
string Toss(string player1, string player2, string& position)
{
	int maxnumber = 0;int randomnumber = 0;
	srand((unsigned)time(0));
	randomnumber = (rand() % 2);
	//cout << "Toss between " << player1 << " " << player2 << endl;
	if (randomnumber == 1)
	{
		//cout << " heads" << endl;
		cout << player1 << " has won the toss " << endl;
		position = player1;
		return player2;
	}
	else
	{
		cout << player2 << " has won the toss " << endl;
		position = player2;
		return player1;
	}



}
void board()
{

	cout << "\n\n";
	for (int i = 0; i < 50; i++)
	{
		cout << "-";
	}
	cout << "\n\t\tSNAKE AT POSITION\n";
	for (int i = 0; i < 50; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << " \n\tFrom 15 to 5\n\tFrom 34 to 25\n\tFrom 86 to 42\n\tFrom 90 to 73\n\tFrom 81 to 78\n\n";
	for (int i = 0; i < 50; i++)
	{
		cout << "-";
	}
	cout << "\n\t\t LADDER AT POSITION\n";
	for (int i = 0; i < 50; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "\n\tFrom 19 to 85\n\tFrom 8 to 35\n\tFrom 32 to 67\n\tFrom 60 to 79\n\tFrom 69 to 89\n";
	for (int i = 0; i < 50; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << endl;
	system("pause");
	system("CLS");
}
void play_dice(int& score, int& i, int& moves)

{
	int six = 0;
	int dice = 0;

	//as dice has max 6 number on it
	dice = rand() % 6 + 1;
	moves++;
	//cout << "enter dice" << endl;
	//cin >> dice;


	//Check for Six's;
	if (dice == 6 && i == 1)         //first six
	{
		six = score;
		cout << "\nWOW:) you got a 'Six',	Roll the Dice again...\n";
		system("pause");
		cout << endl;
		six += dice;
		dice = rand() % 6 + 1;
		moves++;
		//cout << "enter dice" << endl;
		//cin >> dice;
		if (dice == 6)		//second six
		{
			cout << "\nWow:) you got a 'Six' again,	Roll the Dice again...\n";
			system("pause");
			cout << endl;

			six += dice;
			dice = rand() % 6 + 1;
			moves++;
			//cout << "enter dice" << endl;
			//cin >> dice;
			if (dice == 6)		//third six
			{
				cout << "\nAlas:( you got 3 'Sixes' in a row,	Roll the Dice again...\n";
				system("pause");
				cout << endl;
				six += dice;
				dice = rand() % 6 + 1;
				moves++;
				//cout << "enter dice" << endl;
				//cin >> dice;
				if (dice == 6)
				{
					cout << "you got " << dice << endl;
					six += dice;
				}
				else
				{
					//score =0 if not six for the fourth time.
					six = score;
				}
			}
			else
			{
				//if not six for the third time.
				six += dice;
			}
		}
		else
		{
			//if not six for the second time.
			six += dice;
		}
		score = six;
		cout << "Now you are at position " << score << endl;;
		system("pause");
	}
	else if (dice == 6 && i == 0)
	{
		i = 1;
		cout << "\nWOW:) you got a 'Six',	Roll the Dice again...\n";
		system("pause");
		cout << endl;
		//cout << "enter dice" << endl;
		// cin >> dice;
		dice = rand() % 6 + 1;
		moves++;
		if (dice == 6)		//second six
		{
			cout << "\nWow:) you got a 'Six' again,	Roll the Dice again...\n";
			system("pause");
			cout << endl;
			cout << dice;
			six += dice;
			dice = rand() % 6 + 1;
			moves++;
			//cout << "enter dice" << endl;
			//cin >> dice;
			if (dice == 6)		//third six
			{
				cout << "\nAlas:( you got 3 'Sixes' in a row,	Roll the Dice again...\n";
				system("pause");
				cout << endl;
				dice = rand() % 6 + 1;
				six += dice;
				moves++;
				//cout << "enter dice" << endl;
				//cin >> dice;
				if (dice == 6)
				{
					cout << "you got " << dice << endl;
					six += dice;
				}
				else
				{
					//score =0 if not six for the fourth time.
					six = 0;
					i = 0;
				}
			}
			else
			{
				//	//if not six for the third time.
				six += dice;
			}

			//score = six;
			//cout << "Now you are at position " << score << endl;
			////i = 1;
			//system("pause");

		}
		else
		{
			six += dice;
		}

		score = six;
		cout << "Now you are at position " << score << endl;
		//i = 1;
		system("pause");
	}
	else if (dice != 6 && i == 1)
	{
		//if not six for the first time.
		score += dice;
		cout << "You got " << dice << endl;
		cout << "Now you are at position " << score << endl;
		system("pause");
	}
	switch (score)
	{
	case 90:
		score = 73;
		system("Color 40");
		cout << "\n\n\aOops!! Snake has Biten you !! You are at position " << score << "\n";
		Sleep(100);
		system("Color 0F");

		break;
	case 81:
		score = 78;
		system("Color 40");
		cout << "\n\n\aOops!! Snake has Biten you !! You are at position " << score << "\n";
		Sleep(100);
		system("Color 0F");
		break;
	case 86:
		score = 42;
		system("Color 40");
		cout << "\n\n\aOops!! Snake has Biten you !! You are at position " << score << "\n";
		Sleep(100);
		system("Color 0F");
		break;
	case 34:
		score = 25;
		system("Color 40");
		cout << "\n\n\aOops!! Snake has Biten you !! You are at position " << score << "\n";
		Sleep(100);
		system("Color 0F");
		break;
	case 15:
		score = 5;
		system("Color 40");
		cout << "\n\n\aOops!! Snake has Biten you !! You are at position " << score << "\n";
		Sleep(100);
		system("Color 0F");
		break;
	case 8:
		score = 35;
		system("Color 20");
		cout << "\nGreat!! You Climbed a ladder !! You are at position " << score;
		Sleep(50);
		system("Color 0F");
		break;

	case 32:
		score = 67;
		system("Color 20");
		cout << "\nGreat!! You Climbed a ladder !! You are at position " << score;
		Sleep(100);
		system("Color 0F");
		break;
	case 19:
		score = 85;
		system("Color 20");
		cout << "\nGreat!! You Climbed a ladder !! You are at position " << score;
		Sleep(100);
		system("Color 0F");
		break;
	case 60:
		score = 79;
		system("Color 20");
		cout << "\nGreat!! You Climbed a ladder !! You are at position " << score;
		Sleep(100);
		system("Color 0F");
		break;
	case 69:
		score = 89;
		system("Color 20");
		cout << "\nGreat!! You Climbed a ladder !! You are at position " << score;
		Sleep(100);
		system("Color 0F");
	}

}
void gamescore(string name1, string name2, string name3, string name4, int p1, int p2, int p3, int p4)
{
	;
	cout << endl << endl;
	cout << "****************************************" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\tGAME STATUS\n";
	if (p1 >= 100)
		cout << "\n\t\t\t--> " << name1 << " is at position\t" << 100 << endl;
	else
		cout << "\n\t\t\t--> " << name1 << " is at position\t" << p1 << endl;
	if (p2 >= 100)
		cout << "\n\t\t\t--> " << name2 << " is at position\t" << 100 << endl;
	else
		cout << "\n\t\t\t--> " << name2 << " is at position\t" << p2 << endl;
	if (p3 >= 100)
		cout << "\n\t\t\t--> " << name3 << " is at position\t" << 100 << endl;
	else
		cout << "\n\t\t\t--> " << name3 << " is at position\t" << p3 << endl;
	if (p4 >= 100)
		cout << "\n\t\t\t--> " << name4 << " is at position\t" << 100 << endl;
	else
		cout << "\n\t\t\t--> " << name4 << " is at position\t" << p4 << endl;

	cout << endl;
	cout << "****************************************" << endl;
	cout << endl;
	system("pause");
}

void Game(string player1, string player2, string player3, string player4, int& scoreOfplayer1, int& scoreOfplayer2, int& scoreOfplayer3, int& scoreOfplayer4, string names[4])
{
	int lastposition = 0;
	int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
	int flag11 = 0, flag22 = 0, flag33 = 0, flag44 = 0;
	int i = 0;
	int moves1 = 0;
	int moves2 = 0;
	int moves3 = 0;
	int moves4 = 0;
	bool record = 0;

	while (scoreOfplayer1 <= 100 || scoreOfplayer2 <= 100 || scoreOfplayer3 <= 100 || scoreOfplayer4 <= 100)
	{
		//~~~~~ Player 1
		system("CLS");
		//gamescore(player1, player2, player3, player4, scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
		/*/cout << "\n\n--->" << names[0] << " Now your Turn >> Roll the Dice... \n";
		system("pause");
		cout << endl;*/
		if (scoreOfplayer1 >= 100 && flag11 == 0)
		{
			flag11 = 1;
			i++;
			cout << names[0] << "Your score is 100!!! you win!!!" << endl;
			if (record == false) {
				record = true;
				count_moves = moves1;
				winner = names[0];
			}
			system("pause");
			//break;
		}
		else if (scoreOfplayer1 < 100)
		{
			cout << "\n\n--->" << names[0] << " Now your Turn >> Roll the Dice... \n";
			system("pause");
			cout << endl;
			lastposition = scoreOfplayer1;
			if (scoreOfplayer1 == scoreOfplayer2)
			{
				scoreOfplayer2 = 0;
			}
			else if (scoreOfplayer1 == scoreOfplayer3)
			{
				scoreOfplayer3 = 0;
			}
			else if (scoreOfplayer1 == scoreOfplayer4)
			{
				scoreOfplayer4 = 0;
			}
			play_dice(scoreOfplayer1, flag1, moves1);
			//Board1(scoreOfplayer1);
			if (scoreOfplayer1 == scoreOfplayer2)
			{
				scoreOfplayer2 = 0;
			}
			else if (scoreOfplayer1 == scoreOfplayer3)
			{
				scoreOfplayer3 = 0;
			}
			else if (scoreOfplayer1 == scoreOfplayer4)
			{
				scoreOfplayer4 = 0;
			}
			Board1(scoreOfplayer1);
			system("pause");
			cin.get();
		}




		//~~~~~ Player 2
		system("CLS");
		//gamescore(player1, player2, player3, player4, scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
		/*cout << "\n\n--->" << names[1] << " Now your Turn >>Roll the Dice...\n";
		system("pause");
		cout << endl;*/
		if (scoreOfplayer2 >= 100 && flag22 == 0)
		{
			flag22 = 1;
			i++;
			cout << names[1] << "Your score is 100!!! you win!!!" << endl;
			if (record == false) {
				record = true;
				count_moves = moves1;
				winner = names[1];
			}
			system("pause");
			//break;
		}
		else if (scoreOfplayer2 < 100)
		{

			cout << "\n\n--->" << names[1] << " Now your Turn >>Roll the Dice...\n";
			system("pause");
			cout << endl;
			lastposition = scoreOfplayer2;
			if (scoreOfplayer2 == scoreOfplayer1)
			{
				scoreOfplayer1 = 0;
			}
			else if (scoreOfplayer2 == scoreOfplayer3)
			{
				scoreOfplayer3 = 0;
			}
			else if (scoreOfplayer2 == scoreOfplayer4)
			{
				scoreOfplayer4 = 0;
			}
			play_dice(scoreOfplayer2, flag2, moves2);
			//Board2(scoreOfplayer2);
			if (scoreOfplayer2 == scoreOfplayer1)
			{
				scoreOfplayer1 = 0;
			}
			else if (scoreOfplayer2 == scoreOfplayer3)
			{
				scoreOfplayer3 = 0;
			}
			else if (scoreOfplayer2 == scoreOfplayer4)
			{
				scoreOfplayer4 = 0;
			}
			Board2(scoreOfplayer2);
			system("pause");
			cin.get();
		}




		//~~~~~ Player 3

		system("CLS");
		//gamescore(player1, player2, player3, player4, scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
		//cout << "\n\n--->" << names[2] << " Now your Turn >> Roll the Dice...\n";
		//system("pause");
		//cout << endl;
		if (scoreOfplayer3 >= 100 && flag33 == 0)
		{
			flag33 = 1;
			i++;
			cout << names[2] << "Your score is 100!!! you win!!!" << endl;
			//cout << "Your score is 100!!! you win!!!" << endl;
			if (record == false) {
				record = true;
				count_moves = moves1;
				winner = names[2];
			}
			system("pause");

		}
		else if (scoreOfplayer3 < 100)
		{
			cout << "\n\n--->" << names[2] << " Now your Turn >> Roll the Dice...\n";
			system("pause");

			cout << endl;
			lastposition = scoreOfplayer3;
			if (scoreOfplayer3 == scoreOfplayer1)
			{
				scoreOfplayer1 = 0;
			}
			else if (scoreOfplayer3 == scoreOfplayer2)
			{
				scoreOfplayer2 = 0;
			}
			else if (scoreOfplayer3 == scoreOfplayer4)
			{
				scoreOfplayer4 = 0;
			}
			play_dice(scoreOfplayer3, flag3, moves3);
			//Board3(scoreOfplayer3);
			if (scoreOfplayer3 == scoreOfplayer1)
			{
				scoreOfplayer1 = 0;
			}
			else if (scoreOfplayer3 == scoreOfplayer2)
			{
				scoreOfplayer2 = 0;
			}
			else if (scoreOfplayer3 == scoreOfplayer4)
			{
				scoreOfplayer4 = 0;
			}
			Board3(scoreOfplayer3);
			system("pause");
			//gamescore(names[0], names[1], names[2], names[3], scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);

			cin.get();
		}




		//~~~~~ Player 4
		system("CLS");
		//gamescore(player1, player2, player3, player4, scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
		//cout << "\n\n--->" << names[3] << " Now your Turn >> Roll the Dice...\n";
		//system("pause");
		//cout << endl;
		if (scoreOfplayer4 >= 100 && flag44 == 0)
		{
			flag44 = 1;
			i++;
			cout << names[3] << "Your score is 100!!! you win!!!" << endl;
			if (record == false) {
				record = true;
				count_moves = moves1;
				winner = names[4];
			}
			//cout << "Your score is 100!!! you win!!!" << endl;
			system("pause");

		}
		else if (scoreOfplayer4 < 100)
		{

			cout << "\n\n--->" << names[3] << " Now your Turn >> Roll the Dice...\n";
			system("pause");
			cout << endl;
			lastposition = scoreOfplayer4;
			if (scoreOfplayer4 == scoreOfplayer1)
			{
				scoreOfplayer1 = 0;
			}
			else if (scoreOfplayer4 == scoreOfplayer2)
			{
				scoreOfplayer2 = 0;
			}
			else if (scoreOfplayer4 == scoreOfplayer3)
			{
				scoreOfplayer3 = 0;
			}
			play_dice(scoreOfplayer4, flag4, moves4);
			//Board4(scoreOfplayer4);
			if (scoreOfplayer4 == scoreOfplayer1)
			{
				scoreOfplayer1 = 0;
			}
			else if (scoreOfplayer4 == scoreOfplayer2)
			{
				scoreOfplayer2 = 0;
			}
			else if (scoreOfplayer4 == scoreOfplayer3)
			{
				scoreOfplayer3 = 0;
			}
			Board4(scoreOfplayer4);
			//gamescore(names[0], names[1], names[2], names[3], scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
			system("pause");
			cin.get();
		}
		gamescore(names[0], names[1], names[2], names[3], scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
		if (i == 3)
		{
			break;
		}


	}

}
void Result(string player1, string player2, string player3, string player4, int& scoreOfplayer1, int& scoreOfplayer2, int& scoreOfplayer3, int& scoreOfplayer4)
{

	system("cLS");
	cout << "Winner is " << winner << " with " << count_moves << " moves";
	cout << endl;
	system("pause");
}
void Rules()
{
	system("CLS");
	cout << "Player's turn: System will give truns randomly through toss." << endl;
	cout << "Starting move: game will start if player get six." << endl;
	cout << "Game rules: Each player will roll a dice once in each turn. Player will move according to the number he got on dice. \nAny player who got six in a turn will move six step\n forward and then will granted another move." << endl;
	cout << "Ladder: Ladder will be the shortcuts to the end. Try to get any much ladders as possible." << endl;
	cout << "Snakes: Snakes are the hurdles who push you backward" << endl;
	cout << "Endgame: You have to get exact number to get to the win otherwise your token will move backward." << endl;
	cout << "Important: If two or more players are at the same point index then\n all goes back to the initial state except the latest one." << endl;
	system("pause");

}
void Credits()
{
	system("CLS");
	cout << "Developed by: muhamamd ibrahim sakhawat\nRoll no: 20F-0301\nSection: Bs(SE)-A\n" << endl;
	system("pause");
}

int main()
{
	int choice = 0;
	string player1;
	string player2;
	string player3;
	string player4;
	string player_position[4];

	int scoreOfplayer1 = 0;
	int scoreOfplayer2 = 0;
	int scoreOfplayer3 = 0;
	int scoreOfplayer4 = 0;
	welcome();
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	Board();


	cout << "\n\n1- Game\n2- Credits\n3- Rules\n4- Winner\n5- EXIT" << endl;
	cout << "Enter your choice between 1-5" << endl;
	cin >> choice;
	while (choice != 0 && choice <= 5)
	{
		if (choice == 1)
		{

			Name(player1, player2, player3, player4);

			string result = Toss(player1, player2, player_position[0]);
			string result1 = Toss(result, player3, player_position[1]);
			string result2 = Toss(result1, player4, player_position[2]);
			player_position[3] = result2;
			cout << endl;
			cout << "TOSS" << endl;
			for (int i = 0;i < 4;i++)
			{
				cout << player_position[i] << endl;
			}
			system("pause");
			cout << "---------------------------------------------------------------------------------------";

			board();
			Game(player1, player2, player3, player4, scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4, player_position);
			Result(player1, player2, player3, player4, scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
			cout << "\n\n1- Game\n2- Credits\n3- Rules\n4- Winner\n5- EXIT" << endl;
			cin >> choice;

		}
		else if (choice == 2)    //Credits
		{
			Credits();
			cout << "\n\n1- Game\n2- Credits\n3- Rules\n4- Winner\n5- EXIT" << endl;
			cin >> choice;
		}
		else if (choice == 3)   //Rules
		{
			Rules();
			cout << "\n\n1- Game\n2- Credits\n3- Rules\n4- Winner\n5- EXIT" << endl;
			cin >> choice;
		}
		else if (choice == 4)   //Record Winner
		{
			Result(player1, player2, player3, player4, scoreOfplayer1, scoreOfplayer2, scoreOfplayer3, scoreOfplayer4);
			cout << "\n\n1- Game\n2- Credits\n3- Rules\n4- Winner\n5- EXIT" << endl;
			cin >> choice;
		}
		else if (choice == 5)   //Exit
		{
			return 0;
		}
	}


	return 0;
}




